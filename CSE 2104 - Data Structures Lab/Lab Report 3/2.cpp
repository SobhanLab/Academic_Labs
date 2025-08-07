//Write a C++ program to delete an array element by its value using linear search.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cout << "Enter value of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element in array you want to delete: ";
    cin >> x;

    int index = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            index = i;
            break;
        }
    }

    if(index == -1) {
        cout << "Element not found" << endl;
        return 0;
    }

    for(int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    cout << "Array after deleting element: ";
    for(int i = 0; i < n - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
