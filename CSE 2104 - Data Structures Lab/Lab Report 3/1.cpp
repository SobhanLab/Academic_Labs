//Write a C++ program to delete an array element using its index number.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cout << "Enter value of array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> x;

    if(x >= n || x < 0) {
        cout << "index out of bound" << endl;
        return 0;
    }

    for(int i = x; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    for(int i = 0; i < n - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
