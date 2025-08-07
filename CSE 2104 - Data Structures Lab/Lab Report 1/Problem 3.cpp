//Sum of User entered arrays values

#include<iostream>
using namespace std;

int main(){
    int a[100], n;
    int sum = 0;
    cout << "Enter n: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        sum=sum+a[i];
    }
    cout << "Sum = " << sum <<endl;

    return 0;
}
