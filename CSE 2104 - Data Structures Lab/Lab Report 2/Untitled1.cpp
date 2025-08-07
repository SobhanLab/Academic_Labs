#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x,i;

    cout << "Enter Array Size: ";
    cin >> n;

    int array[n];
    for(i=0; i<n; i++){
        cout << "Element " << i+1 << ":- ";
        cin >> array[i];
    }

    cout << "New Element: ";
    cin >> x;

    array[i]=x;
    n++;

    for(i=0; i<n; i++){
    cout << "\nElement " << i+1 << ":> " << array[i] << endl;
    }

    return 0;
}
