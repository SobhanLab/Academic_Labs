#include <bits/stdc++.h>
using namespace std;

int main() {
    int maxSize, n, m, i;
    cout << "Enter Maximum Size: ";
    cin >> maxSize;
    int array[maxSize];

    cout << endl;
    cout << "Enter Initial Size: ";
    cin >> n;

    if (n > maxSize) {
        cout << "Error: Initial size exceeds maximum allowed size." << endl;
        return 1;
    }

    cout << endl;
    for (i = 0; i < n; i++) {
        cout << "Element - " << i + 1 << ": ";
        cin >> array[i];
    }
    cout << endl;

    cout << "New element Size: ";
    cin >> m;

    if (n + m > maxSize) {
        cout << "Error: Total number of elements exceeds the maximum array size." << endl;
        return 1;
    }

    for (i = n; i < (n + m); i++) {
        cout << "Element - " << (i + 1) << ": ";
        cin >> array[i];
    }

    cout << endl;
    for (i = 0; i < (n + m); i++) {
        cout << "Element - " << i + 1 << ": " << array[i] << endl;
    }

    return 0;
}
