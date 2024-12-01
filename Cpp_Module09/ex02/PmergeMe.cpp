#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{}
PmergeMe::~PmergeMe()
{}
PmergeMe::PmergeMe(const PmergeMe& cpy)
{
    *this = cpy;
}
PmergeMe& PmergeMe::operator= (const PmergeMe& value)
{
    if (this != &value)
    {
        this->_deq = value._deq;
        this->_vec = value._vec;
    }
    return *this;
}


void PmergeMe::checkValue(char *val)
{
    std::string strCtrl = val;
    size_t position = strCtrl.find_first_not_of("+0123456789");
    if (strCtrl.size() == 0)
        throw ("Error: Can't be empty!");
    if (strCtrl[0] == '-')
        throw ("Error: Number can't be negative!");
    if (strCtrl.size() > 10 || (strCtrl > "2147483647" && strCtrl.size() == 10))
        throw ("Error: Number can't be greater than INT_MAX!");
    if (position != std::string::npos)
        throw ("Error: invalid value!");
}

void PmergeMe::printVector(std::string string)
{
    int count = 0;
    std::cout << string;
    for (std::vector<int>::iterator it = this->_vec.begin(); it != this->_vec.end(); it++)
    {
        std::cout << *it;
        if (it != this->_vec.end() - 1)
            std::cout << " ";
        if (count > 10)
        {
            std::cout << "[...]";
            break;
        }
        count++;
    }
    std::cout << std::endl;
}

void PmergeMe::printDeque(std::string string)
{
    int count = 0;
    std::cout << string;
    for (std::deque<int>::iterator it = this->_deq.begin(); it != this->_deq.end(); it++)
    {
        std::cout << *it;
        if (it != this->_deq.end() - 1)
            std::cout << " ";
        if (count > 10)
        {
            std::cout << "[...]";
            break;
        }
        count++;
    }
    std::cout << std::endl;
}


void PmergeMe::initMergeInsert(char **val)
{
    int iValue = 0;

    for (int i = 1; val[i]; i++)
    {
        checkValue(val[i]);
        std::istringstream(val[i]) >> iValue;
        this->_deq.push_back(iValue);
        this->_vec.push_back(iValue);
    }

    printVector("Vector Before: ");
    clock_t start_vec = clock();
    mergeSort(this->_vec, 0, this->_vec.size() -1);
    clock_t end_vec = clock();
    double result_vec = static_cast<double>(end_vec - start_vec) / CLOCKS_PER_SEC * 1000;
    printVector("Vector After: ");



    printDeque("Deque Before: ");
    clock_t start_deque = clock();
    mergeSort(this->_deq, 0, this->_deq.size() -1);
    clock_t end_deque = clock();
    double result_deque = static_cast<double>(end_deque - start_deque) / CLOCKS_PER_SEC * 1000;
    printDeque("Deque After: ");


    std::cout << std::fixed << std::setprecision(5);
    std::cout << "Time to process a range of " << this->_vec.size() << " elements with std::vector : " 
              << result_vec << " us" << std::endl;
    std::cout << "Time to process a range of " << this->_deq.size() << " elements with std::deque : " 
              << result_deque << " us" << std::endl;
}