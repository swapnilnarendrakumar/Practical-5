#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <vector>
#include "Sort.h"
// Swapnil(a1848855), Dai(a1837470), Dil(a1825200) Duong(a1876928)
using namespace std;

class QuickSort: public Sort {
    public:
        QuickSort();
        std::vector<int> sort(std::vector<int> list);
        void sort(vector<int>& array, int start, int end);

};

#endif