#include <iostream>
#include "RecursiveBinarySearch.h"
// Swapnil(a1848855), Dai(a1837470), Dil(a1825200) Duong(a1876928)
RecursiveBinarySearch::RecursiveBinarySearch() {
}

bool RecursiveBinarySearch::search(std::vector<int> vectorInput , int searchInput) {
    return this->recursiveSearch(vectorInput , searchInput , 0 , vectorInput.size() - 1);
}

bool RecursiveBinarySearch::recursiveSearch (std::vector<int> vectorInput , int searchInput , int boundS , int boundL) {
    int midEle = (boundL + boundS) / 2;
    // std::cout << vectorInput[midEle] << std::endl;

    if(vectorInput[midEle] == searchInput) {
        return true;
    } else if(boundL - boundS == 1) {
        return false;
    } else {
        if(vectorInput[midEle] > searchInput) {
            return recursiveSearch(vectorInput , searchInput , boundS , midEle--);
        } else if(vectorInput[midEle] < searchInput) {
            return recursiveSearch(vectorInput , searchInput , midEle++ , boundL);
        } else {
            return false;
        }
    }
}


