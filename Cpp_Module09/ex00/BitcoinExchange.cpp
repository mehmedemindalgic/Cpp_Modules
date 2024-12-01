#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(std::string filename)
{
    DataParse();
    InputParse(filename);
}

BitcoinExchange::BitcoinExchange()
{
    DataParse();
    InputParse("");
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
    data = rhs.data;
    return *this;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & rhs)
{
    *this = rhs;
}

void BitcoinExchange::BtcCalculator(std::string dateS, int date, double val)
{
    for (std::map<std::string, double>::iterator it = data.begin(); it != data.end(); it++) {
       int dataDate = DateConvert(it->first);
        if(dataDate >= date) {
            if (date != dataDate) 
              it--;
            std::cout << dateS << " ==> " << val << " = "<<  it->second * val << std::endl;
            return;
        }
    }
    std::cout <<"ERROR: Bad date: "  << dateS << std::endl;
}

int BitcoinExchange::DateConvert(std::string date)
{
    int year = atoi(date.substr(0, 4).c_str());
    int month = atoi(date.substr(5, 2).c_str());
    int day = atoi(date.substr(8, 2).c_str());
    return year * 10000 + month * 100 + day;
}

bool BitcoinExchange::DateControl(std::string date)
{
    int year = atoi(date.substr(0, 4).c_str());
    int month = atoi(date.substr(5, 2).c_str());
    int day = atoi(date.substr(8, 2).c_str());
    if (date.size() != 10) {
        return true;
    }
    if (date[4] != '-' || date[7] != '-') {
        return true;
    }
    if(year == 2009 && month == 1 && day == 1) {
        return true;
    }
    if (year < 2009 || year > 2022) {
        return true;
    }
    if (month < 1 || month > 12) {
        return true;
    }
    if (day < 1 || day > 31) {
        return true;
    }
    return false;
}


void BitcoinExchange::DataParse()
{
    std::ifstream file(datafile);
    if (!file.is_open()) {
        std::cout << "ERROR: file open" << std::endl;
        return;
    }
    std::string line;
    while (std::getline(file, line)) {
        if (line[0] != '2')
        {
            continue;
        }
        if (line.find(",") == std::string::npos) {
            continue;
        }
        std::string key = line.substr(0, line.find(","));
        std::string value = line.substr(line.find(",") + 1);
        if(value.empty()) {
            continue;
        }
        double val;
        val = atof(value.c_str());
        this->data[key] = val;
    }
    file.close();
}

void BitcoinExchange::InputParse(std::string filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        std::cout << "ERROR:  file open" << std::endl;
        return;
    }
    std::string line;
    bool firstline = true;
    while (std::getline(file, line)) {
        if (firstline) {
            firstline = false;
            std::string tmp = line;
            for (size_t i = 0; i < tmp.size(); i++)
                tmp[i] = toupper(tmp[i]);
            tmp.erase(std::remove(tmp.begin(), tmp.end(), ' '), tmp.end());    
            if(tmp.compare("DATE|VALUE")) {
                std::cout << "ERROR: Bad First Line: " << line << std::endl;
                file.close();
                return;
            }
            continue;
        }
        if (line.find("|") == std::string::npos) {;
            std::cout << "ERROR: Bad input: " << line << std::endl;
            continue;
        }
        std::string key = line.substr(0, line.find("|"));
        std::string value = line.substr(line.find("|") + 1);
        key = key.substr(0, key.find(" "));
        if(value.empty()) {
            std::cout << "ERROR: Not value: " << key << std::endl;
            continue;
        }
        double val;
        char *end;
        val = strtod(value.c_str(), &end);
        if (*end != '\0' && *end != ' ' && *end != '\t') {
            std::cout << "ERROR: Bad value: " << value << std::endl;
            continue;
        }
        if (val < 0) {
            std::cout << "ERROR: Negative value: " << value << std::endl;
            continue;
        }
        if (val > 1000){
            std::cout << "ERROR: Too big value: " << value << std::endl;
            continue;
        }
        if (DateControl(key)) {
            std::cout << "ERROR: Bad date: " << key << std::endl;
            continue;
        }
        BtcCalculator(key, DateConvert(key), val);
    }
    file.close();
}