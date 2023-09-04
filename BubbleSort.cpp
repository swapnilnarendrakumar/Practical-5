// Swapnil(a1848855), Dai(a1837470), Dil(a1825200) Duong(a1876928)
#include <iostream>
using namespace std;
#include <vector>
#include "BubbleSort.h"
#include "Sort.h"

BubbleSort::BubbleSort() {
}

std::vector<int> BubbleSort::sort(std::vector<int> list) {
    void bubbleSort(vector<int>& array); {
     for (int i = list.size() - 1; i > 0; i--) {
          for(int j = 0; j < i; j++) {
          if(list.at(j) > list.at(j+1)) {
            // swap array.at(j) and swap array.at(j+1)
            swap(list.at(j), list.at(j+1));
         } 
        }
      }
    }
    return list;

};



// void BubbleSort::sort(vector<int>& array){
//     void bubbleSort(vector<int>& array); {
//      for (int i = array.size() - 1; i > 0; i--) {
//           for(int j = 0; j < i; j++) {
//           if(array.at(j) > array.at(j+1)) {
//             // swap array.at(j) and swap array.at(j+1)
//             swap(array.at(j), array.at(j+1));
//          } 
//         }
//       }
//     }  

// }