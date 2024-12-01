#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib>


#define datafile "data.csv"

class BitcoinExchange
{
    private:
        std::map<std::string, double > data; 
        void InputParse(std::string filename);
        bool DateControl(std::string date);
        void DataParse();
        int DateConvert(std::string date);
        void BtcCalculator(std::string dateS, int date, double val);
        
    public:

        BitcoinExchange(std::string filename);
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange operator=(BitcoinExchange const & rhs);
        BitcoinExchange(BitcoinExchange const & rhs);
       

};