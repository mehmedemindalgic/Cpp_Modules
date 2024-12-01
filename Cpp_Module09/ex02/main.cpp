#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 3)
        std::cerr << "Usage: " << av[0] << " \"[numbers]\"$" << std::endl;
    else
    {
        try
        {
            PmergeMe mergeInsert;
            mergeInsert.initMergeInsert(av);
        }
        catch(const char *err)
        {
            std::cerr << err << std::endl;
        }
    }
}