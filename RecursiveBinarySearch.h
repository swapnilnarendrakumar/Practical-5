#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
// Swapnil(a1848855), Dai(a1837470), Dil(a1825200) Duong(a1876928)
#include <vector>

class RecursiveBinarySearch {
    private:
        bool recursiveSearch(std::vector<int> vectorIn , int searchInput , int boundS , int boundL);

    public:
        RecursiveBinarySearch();
        bool search(std::vector<int> vectorIn, int searchInput);
};





#endif