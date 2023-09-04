#include <iostream>
#include <vector>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

using namespace std;

int main() {
    std::vector<int> list;
    int num;

     while (std::cin >> num) {
        list.push_back(num); // Add the integer to the vector
    }

    std::cin.clear();
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


    // std::vector<int> list;

    // list.push_back(-3);
    // list.push_back(1);
    // list.push_back(0);
    // list.push_back(10);
    // list.push_back(7);
    // list.push_back(2);
    // list.push_back(6);

    BubbleSort q;
    list = q.sort(list);

    RecursiveBinarySearch p;
    bool a = p.search(list, 1);

    // for (int i = 0; i < 7; i++) {
    //     cout << list.at(i) << " ";
    // }

    // cout << endl;

    if (a == 0) {
        cout << "false " << endl;
    } else {
        cout << "true " << endl;
    }
    for (int num : list) {
        std::cout << num << " ";
    }

    cout << endl;

    return 0;

}