#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;

      cout << "The Numbers are: ";
    for (int i = 1; i <= n; i++) {
         cout << i << " ";
        sum = sum+i;
    }

    cout << "The sum is: " << sum << endl;

    return 0;
}
