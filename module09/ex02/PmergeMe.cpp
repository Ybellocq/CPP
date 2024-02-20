#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){

}

PmergeMe::~PmergeMe(){

}

PmergeMe::PmergeMe(const PmergeMe& copy){
    *this = copy;
}

PmergeMe& PmergeMe::operator=(const PmergeMe &copy){
    sequence = copy.sequence;
    sequenceList = copy.sequenceList;
    return *this;
}

void PmergeMe::mergeSortVector(){
    if (sequence.size() <= 1)
        return ;
    mergeSortVectorHelper(sequence.begin(), sequence.end());
}

void PmergeMe::mergeSortList(){
    sequenceList.sort();
}

void PmergeMe::printUnsortedSequence() const{
    std::cout << "Sequence not sorted: ";
    for(std::vector<int>::const_iterator it = sequence.begin(); it!=sequence.end(); ++it)
       std::cout << *it << ' ';
    }

void PmergeMe::printSortedSequenceVector() const{
    std::cout << "Sequence sorted: ";
    for (std::vector<int>::const_iterator it = sequence.begin(); it != sequence.end(); ++it)
        std::cout << *it << ' ';
}

void PmergeMe::printSortedSequenceList() const {
    std::cout << "Sequence sorted in LIST: ";
    for(std::list<int>::const_iterator it = sequenceList.begin(); it != sequenceList.end(); ++it)
        std::cout << *it << ' ';
}
//first container
void PmergeMe::printTimeUsedVector(clock_t startTime) const{
    clock_t endTime = clock();
    double elapsedTime = static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC;
    double elapsedTimeMicros = elapsedTime * 1e6;  // Convertir en microsecondes
    std::cout << "Time used for vector: " << std::fixed << std::setprecision(2) << elapsedTimeMicros << " µs." << std::endl;
}
//second container
void PmergeMe::printTimeUsedList(clock_t startTime) const{
    clock_t endTime = clock();
    double elapsedTime = static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC;
    double elapsedTimeMicros = elapsedTime * 1e6;  // Convertir en microsecondes
    std::cout << "Time used for list: " << std::fixed << std::setprecision(2) << elapsedTimeMicros << " µs." << std::endl;
}

template <typename Iterator>
void PmergeMe::mergeSortVectorHelper(Iterator begin, Iterator end){
    if (end - begin > 1){
        Iterator middle = begin + (end - begin) / 2;
        mergeSortVectorHelper(begin, middle);
        mergeSortVectorHelper(middle, end);
        std::inplace_merge(begin, middle, end);
    }
}

