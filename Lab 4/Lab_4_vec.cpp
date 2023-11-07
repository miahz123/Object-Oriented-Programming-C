/***
 * CSE 2010 Fall 2023
 * Lab #4
 * Jeremiah Rivera 007634309
 * 11/1/2023
 *
 * This program will organize data using data structures, arrays and vectors, and at the same time learning similarities and differences between the two in how they contain, access, and update elements, passing them onto functions.
 *
 * {Describe 1) what was most challenging and 2) how you solved/overcame the problem OR
 * the directions of how you PLAN to solve it}
 *
***/

#include <iostream>
#include "ArrayVec.h"
#include "DisplayVec.h"
using namespace std;



int main()
{
    // initialize vec
    const int CAPACITY = 10;
    vector <int> test_vec(CAPACITY);

    //initialize ArrayVec and DisplayVec
    DisplayVec disp = DisplayVec();
    ArrayVec av = ArrayVec();

    // populate with values
    int range = 20;
    int num_elem = 15;
    av.randGenVec(test_vec, num_elem, range);

    // display contents
    int test_vector_size = test_vec.size();
    cout << "Vector Elements\n";
    disp.printVector(test_vec);
    cout << "Array Memsize";
    disp.printMetaVector(test_vec);
}

