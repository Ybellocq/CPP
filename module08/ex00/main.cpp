#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void) {
    std::cout << "VECTOR" << std::endl;
    std::cout << std::endl;

    std::vector<int> vec;
    
    vec.push_back(42);
    vec.push_back(12);
    vec.push_back(27);
    vec.push_back(123);

    std::cout << "Vector values: ";
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    try {
        easyfind(vec, 42);
        easyfind(vec, 27);
        easyfind(vec, 96);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    
    std::cout << "LIST" << std::endl;
    std::cout << std::endl;

    std::list<int> lst;
    
    lst.push_back(42);
    lst.push_back(96);
    lst.push_back(72);
    lst.push_back(482);

    std::cout << "List values: ";
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    try {
        easyfind(lst, 42);
        easyfind(lst, 96);
        easyfind(lst, 78);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}