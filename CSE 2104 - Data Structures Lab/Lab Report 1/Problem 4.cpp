//Max & Min in inputed Array

#include<iostream>
using namespace std;

int main(){
    int arr[100], n;
    cout << "Enter n: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int max = arr[0];
    for(int i=1; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout <<"Max: " << max << endl;

    int min = arr[0];
    for(int i=1; i<n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout <<"Min: " << min << endl;

    return 0;
}
