/*
    File: ArrayFunctionTesting.cpp

    PURPOSE:
    This file contains automated tests for array utility functions.

    STUDENT INSTRUCTIONS:
    - The program should COMPILE and RUN before any tests are enabled.
    - You will UNCOMMENT each test section ONLY AFTER completing
      the required function(s) in ArrayFunctions.h and ArrayFunctions.cpp.
    - Work through this file FROM TOP TO BOTTOM.

    DO NOT modify the test logic itself.
*/

#include <iostream>
#include "ArrayFunctions.h"

#define SUCCESS 0

using namespace std;

int main() {

    // This program should build and run even before
    // any array utility functions are implemented.
    cout << "\nArray Utilities Test Program\n";
    cout << "----------------------------------\n";

    int testCounter  = 0;
    int passedCounter = 0;

    /*
    ============================================================
    TODO #1: find() and countValues()
    ============================================================
    Instructions:
    - Implement the following functions:
        int find(char[], int, char);
        int countValues(char[], int, char);

    - find() returns the index or -1 if not found
    - Add the function PROTOTYPES to ArrayFunctions.h
    - Add the function DEFINITIONS to ArrayFunctions.cpp
    - When ready, UNCOMMENT the following section to test.
    */

    // cout << "\nTesting find() and countValues() functions:\n";

    // char myCharArray[] = {' '};
    // testCounter++;
    // if (find(myCharArray, 1, 'a') != -1)
    //     cout << "Error: find() value intended to be not found\n";
    // else passedCounter++;

    // testCounter++;
    // if (countValues(myCharArray, 1, 'a') != 0)
    //     cout << "Error: countValues() should return 0 count for not found.\n";
    // else passedCounter++;

    // char myCharArray2[] = { 'A', 'B', 'A', 'C', 'A', 'B' };
    // testCounter++;
    // if (find(myCharArray2, 6, 'A') != 0)
    //     cout << "Error: find() value should return first occurence \n";
    // else passedCounter++;

    // testCounter++;
    // if (countValues(myCharArray2, 6, 'A') != 3)
    //     cout << "Error: countValues() should find 3 occurences.\n";
    // else passedCounter++;


    /*
    ============================================================
    TODO #2: copyArray() and ArrayElementsEqual()
    ============================================================
    Instructions:
       (hint:  overloaded functions.)          
    - Implement BOTH int and char versions of:
        void copyArray(...)
        bool ArrayElementsEqual(...)

    - for copyArray(), pass 2 arrays and the size of them and copy values 
       from one to the other
    - remember to add the prototype to the header file and the implementation to the utility 
       file for all of these
    - When ready, UNCOMMENT the following section to test.
    */

    // cout << "\nTesting copyArray() and ArrayElementsEqual() functions:\n";

    // char letters1[] = {'h','e','l','l','o'};
    // char letters2[5];
    // testCounter++;
    // copyArray(letters1, letters2, 5);
    // if (!ArrayElementsEqual(letters1, letters2, 5))
    //     cout << "Error: char copy or equality failed\n";
    // else passedCounter++;
    // cout << passedCounter << " out of " << testCounter << " tests passing.\n";

    /*
    ============================================================
    TODO #3: inOrder()
    ============================================================
    Instructions:
    - Implement:
        bool inOrder(int[], int);

    - UNCOMMENT to test after implementation.
    */

    // cout << "\nTesting inOrder() function:\n";

    // int sorted[]   = {1,2,3,4,5};
    // int unsorted[] = {5,4,3,2,1};

    // testCounter++;
    // if (!inOrder(sorted, 5))
    //     cout << "Error: inOrder() failed on sorted array\n";
    // else passedCounter++;

    // testCounter++;
    // if (inOrder(unsorted, 5))
    //     cout << "Error: inOrder() failed on unsorted array\n";
    // else passedCounter++;
    // cout << passedCounter << " out of " << testCounter << " tests passing.\n";

    /*
    ============================================================
    TODO #4: swapElements() and bubbleUp()
    ============================================================
    Instructions:
    - Implement:
        void swapElements(int[], int, int);
        void bubbleUp(int[], int, int);

    - swapElements() and bubbleUp() are two important steps in the bubble sort 
        algorithm
    - you can use the information at https://en.wikipedia.org/wiki/Bubble_sort
        to learn more about Bubble Sort          
    */

    // cout << "\nTesting swapElements() and bubbleUp() functions:\n";
    // int arr1[] = {1,2,3,4,5};

    // testCounter++;
    // swapElements(arr1, 0, 4);
    // if (arr1[0] != 5 || arr1[4] != 1)
    //     cout << "Error: swapElements() did not swap correctly\n";
    // else passedCounter++;
    // cout << passedCounter << " out of " << testCounter << " tests passing.\n";

    /*
    ============================================================
    TODO #5: bubbleSort()
    ============================================================
    Instructions:
    - Implement:
        void bubbleSort(int[], int);

    - your bubbleSort() function must call your swapElements() and 
          bubbleUp() functions.
    - UNCOMMENT after all previous functions work correctly.
    */

    // cout << "\nTesting bubbleSort() function:\n";
    // int arr[] = {5,1,4,2,8};

    // testCounter++;
    // bubbleSort(arr, 5);
    // cout << "Sorted array: ";
    // for (int i = 0; i < 5; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << "\n";

    // if (!inOrder(arr, 5))
    //     cout << "Error: bubbleSort() did not sort the array correctly\n";
    // else passedCounter++;
    // cout << passedCounter << " out of " << testCounter << " tests passing.\n";

    cout << "\nPassed: " << passedCounter << " out of: " << testCounter << " tests run.\n\n";
    cout << "\nProgram finished.\n";
    return SUCCESS;
}
