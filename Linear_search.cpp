// Name: Aditya Sinha 
// PRN: 24070123006
// Branch: EnTC A1

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key)
            return i; // Return index if found
    }
    return -1; // Not found
}

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 4;

    int result = linearSearch(arr, size, key);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

/*
OUTPUT:

Element found at index 3
*/