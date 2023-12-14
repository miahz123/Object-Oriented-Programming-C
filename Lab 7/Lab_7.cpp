/***
 * CSE 2010 Fall 2023
 * Lab #7
 * Jeremiah Rivera 007634309
 * 12/8/2023
 *
 * We will learn how to use generic programming through templates, expanding on previous classes to have members that can hold and process through various data types.
 *
 * I ran into no issues on this lab. The instructions were clear and everything went smoothly. The only issue to say would be missing a ";" at the end of a line, but that's about it.
 *
***/
//Lab_7.cpp
#include <iostream>
#include "ArrayVec.h"
#include "DisplayArr.h"
using namespace std;
int main()
{
    // initialize arr
    const int CAPACITY = 10;
    double test_arr[CAPACITY];

    string data_type = "double";
    //initialize ArrayVec and DisplayArr
    DisplayArr<double> disp = DisplayArr<double>(data_type);
    ArrayVec<double> av = ArrayVec<double>();

    // populate with values
    int range = 15;
    int num_elem = 10;
    av.randGenArr(test_arr, num_elem, range);

    // display contents
    int test_arr_size = av.getSize(test_arr, CAPACITY);
    cout << "Array Elements\n";
    disp.printArray(test_arr, test_arr_size);
    cout << "Array Memsize\n";
    disp.printMetaArray(test_arr, test_arr_size);
}
