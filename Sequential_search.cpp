// Name: Aditya Sinha 
// PRN: 24070123006
// Branch: EnTC A1

#include <iostream>
#include <vector>
using namespace std;

int sequentialSearch(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    vector<int> arr = {10, 23, 45, 70, 11, 15};
    int target = 70;
    
    int result = sequentialSearch(arr, target);
    
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    return 0;
}

/*
OUTPUT: 
Element found at index: 3
*/