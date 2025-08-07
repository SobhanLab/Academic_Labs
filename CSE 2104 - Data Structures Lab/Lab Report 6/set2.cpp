#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int current_size = 0;
    bool valid = true;

    for (int i = 0; i < n; i++) {
        string op;
        cin >> op;
        if (op == "push") {
            int x;
            cin >> x;
            if (valid) {
                current_size++;
            }
        } else if (op == "pop") {
            if (valid) {
                if (current_size > 0) {
                    current_size--;
                } else {
                    valid = false;
                }
            }
        }
    }

    if (valid) {
        cout << "valid" << endl;
    } else {
        cout << "invalid" << endl;
    }

    return 0;
}
