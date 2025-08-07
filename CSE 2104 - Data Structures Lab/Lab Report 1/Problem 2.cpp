//Array use kore user input and output

#include<iostream>
using namespace std;

int main(){
    int a[100], n;
    cout << "Enter n: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}
