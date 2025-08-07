#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of containers: ";
    cin >> n;

    int* loaded = new int[n];
    int* unloaded = new int[n];

    cout << "Enter the loaded sequence (space separated): ";
    for (int i = 0; i < n; i++) {
        cin >> loaded[i];
    }

    cout << "Enter the unloaded sequence (space separated): ";
    for (int i = 0; i < n; i++) {
        cin >> unloaded[i];
    }

    int* stack = new int[n];
    int top = -1;
    int j = 0;

    for (int i = 0; i < n; i++) {
        stack[++top] = loaded[i];
        while (top >= 0 && stack[top] == unloaded[j]) {
            top--;
            j++;
        }
    }

    if (j == n) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }

    delete[] loaded;
    delete[] unloaded;
    delete[] stack;

    return 0;
}
