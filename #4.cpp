/4th
#include <iostream>
using namespace std;

// Function to count multiples of 3 in an array
int divisibleBy3(int array[], int size) {
    if (size < 0) {
        cout << "Invalid Input" << endl;
        exit(1);
    }

    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            cout << "Invalid Input" << endl;
            exit(1);
        }
    }