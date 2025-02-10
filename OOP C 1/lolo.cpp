#include <iostream>
using namespace std;

class d {
    int i;

public:
    d(int val) {
        i = val; // Initialize with the passed value
    }

    int get_i() {
        return i;
    }
};

int main() {
    const int arraySize = 50; // Define the size of the array
    int inputArray[arraySize];

    cout << "Enter " << arraySize << " integers: " << endl;
    for (int i = 0; i < arraySize; i++) {
        cin >> inputArray[i];
    }

    d* ob = new d[arraySize]; // Dynamic allocation of array of objects

    // Initialize objects with corresponding elements from inputArray
    for (int i = 0; i < arraySize; i++) {
        ob[i] = inputArray[i];
    }

    // Display the values initialized within each object of the class 'd'
    for (int i = 0; i < arraySize; i++) {
        cout << ob[i].get_i() << endl;
    }

    delete[] ob; // Free the allocated memory

    return 0;
}

