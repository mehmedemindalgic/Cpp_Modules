#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Usage: ./btc <filename>" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    BitcoinExchange btc(filename);

}