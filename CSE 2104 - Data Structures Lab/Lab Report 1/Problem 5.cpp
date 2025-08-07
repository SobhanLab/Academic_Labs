//Even & Odd Finding in Array

#include<iostream>
using namespace std;

int main(){
    int arr[100], n;
    cout << "Enter n: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "\nEven: ";
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            cout << arr[i] <<" ";
        }
    }

    cout <<"\nOdd: ";
    for(int i=0; i<n; i++){
        if(arr[i]%2==1){
            cout << arr[i] <<" ";
        }
    }

    return 0;
}

