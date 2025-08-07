// Write a C++ program to perform a binary search on an array.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int size, elem;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the values of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element in the array you want to search: ";
    cin >> elem;

    bool found = false;
    for (int i = 0; i < size; i++) {
        if (elem == arr[i]) {
            cout << elem << " is found in index [" << i << "]" << endl;
            found = true;
        }
    }

    if (!found) {
        cout << elem << " is not found in the array." << endl;
    }
}

