#pragma once

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <sstream>
#include <stdlib.h>

class PmergeMe{
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe& copy);
        PmergeMe& operator=(const PmergeMe& copy);
        PmergeMe(const std::vector<int>& inputSequence) : sequence(inputSequence.begin(), inputSequence.end()), sequenceList(inputSequence.begin(), inputSequence.end()) {}
        void mergeSortVector();
        void mergeSortList();
        void printUnsortedSequence() const;
        void printSortedSequenceVector() const;
        void printSortedSequenceList() const;
        void printTimeUsedVector(clock_t startTime) const;
        void printTimeUsedList(clock_t startTime) const;

    private:
        std::vector<int> sequence;
        std::list<int> sequenceList;
        template <typename Iterator>
        void mergeSortVectorHelper(Iterator begin, Iterator end);
};