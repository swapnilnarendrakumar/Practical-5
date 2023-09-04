#include <vector>
#include "Sort.h"
#include "QuickSort.h"
// Swapnil(a1848855), Dai(a1837470), Dil(a1825200) Duong(a1876928)
QuickSort::QuickSort() {

}

void QuickSort::sort(vector<int>& array, int start, int end) {
    // Base case, nothing to sort
    if(start >= end) {
        return;
    }

    int pivot = array.at(end);
    int pivot_index = start;

    // Select the last element as pivot
    if (array.size() >= 3) {
        pivot = array.at(2);
    } else {
        pivot = array.at(end);
    }

    for(int i = start; i < end; i++) {
        if (array.at(i) < pivot) {
            // swap ith element and element at pivot_index
            swap(array.at(i), array.at(pivot_index));

            pivot_index++;

        }

    }

    // swap the pivot_index element and pivot
    swap(array.at(pivot_index), array.at(pivot));
    
    // call sort for subarrays
    sort(array, start, pivot_index - 1);
    sort(array, pivot_index + 1, end);

}

std::vector<int> QuickSort::sort(std::vector<int> list) {
    sort(list, 0, list.back());

    return list;
    
}
