#ifndef PMERGE_HPP
# define PMERGE_HPP

#include <iostream>
#include <deque>
#include <vector>
#include <sstream>
#include <ctime>
#include <iomanip>

class PmergeMe
{
    private:
        std::vector<int> _vec;
        std::deque<int> _deq;
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe& cpy);
        PmergeMe& operator= (const PmergeMe& value);

        void initMergeInsert(char **val);
        void checkValue(char *val);
        void printVector(std::string string);
        void printDeque(std::string string);


        template <typename T>
        void mergeSort(T& array, int left, int right)
        {
            if (left >= right)
                return;

            int mid = left + (right - left) / 2;
            mergeSort(array, left, mid);
            mergeSort(array, mid + 1, right);
            merge(array, left, mid, right);
        };
        
        template <typename T>
        void merge(T& array, int left, int mid, int right)
        {
            int n1 = mid - left + 1;
            int n2 = right - mid;
            int i = 0;
            int j = 0;
            int k = left;

            std::vector<int> leftArray(n1);
            std::vector<int> rightArray(n2);

            for (int i = 0; i < n1; i++)
                leftArray[i] = array[left + i];
            for (int i = 0; i < n2; i++)
                rightArray[i] = array[mid + 1 + i];

            while (i < n1 && j < n2) 
            {
                if (leftArray[i] <= rightArray[j])
                {
                    array[k] = leftArray[i];
                    i++;
                } else 
                {
                    array[k] = rightArray[j];
                    j++;
                }
                k++;
            }
            while (i < n1) 
            {
                array[k] = leftArray[i];
                i++;
                k++;
            }
            while (j < n2) 
            {
                array[k] = rightArray[j];
                j++;
                k++;
            }
        };
};

#endif
