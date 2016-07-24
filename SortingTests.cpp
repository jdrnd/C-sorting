#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "SortingTests.h"



bool SortingTests::initialize(){

    do {
        std::cout << "\n Enter number of values to test sorting with: ";

        int vals = 0;
        std::cin >> val;

        if (vals <= 0 || vals > 65535){
            std::cout "\n Please enter a valid size";
        }
    }while (vals <= 0 || vals > 65535);

    // Initialize test arrays
    size = vals;
    for (int i = 0; i<5; i++){
        values[i] = new int[vals];
    }

    srand((unsigned)time(0));
    int randi;

    // Fill arrays with values
    for (int i = 0; i<size; i++){
        randi = rand();

        for (int i = 0; i<5; i++){
            values[i] = randi;
        }
    }
}

void SortingTest::bubbleSort(int *val, int size) {

    int temp;
    bool swapped = true;

    while (swapped){
        swapped = false;

        for (int i = 0; i < size; i++){

            if (val[i] > val[i+1]){
                temp = val[i];
                val[i] = val[i+1];
                val[i+1] = temp;
                swapped = true;
            }
        }
    }
}

void SortingTest::runTest(){

    initialize();

    print(0);
    std::cout << "\n"
    bubbleSort(values[0]);
    print(0);
}
void SortingTest::print(int i){
    for (int j = 0; i<size; j++){
        std::cout << values[i][j] << " ";
    }
}