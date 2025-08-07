#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    cin >> target;

    int result = -1;
    for (int i = 0; i < size; ++i){
        if (arr[i] == target) {
            result = i;
            break;
        }
    }

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
}
