#include "iter.hpp"

int main(void){

   try
    {
        int intArray[] = {1, 2, 3, 4, 5, 6};
        size_t lengthArray = sizeof(intArray) / sizeof(int);
        iter(intArray, lengthArray, print<int>);
        std::cout << std::endl;
    }
    catch (...)
    {
        std::cout << "impossible" << std::endl;
    }
    try
    {
        std::string stringArray[] = {"test", "test2", "test3"};
        size_t lengthArray = sizeof(stringArray) / sizeof(std::string);
        iter(stringArray, lengthArray, print<std::string>);
    }
    catch (...)
    {
        std::cout << "impossible" << std::endl;
    }
    return 0;
}

