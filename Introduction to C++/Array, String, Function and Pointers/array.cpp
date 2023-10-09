#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Please enter the size: ";
    cin >> n;
    
    int arr[n];

    // input
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // output
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // sum
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout << sum << endl;

    // multi
    int mul=1;
    for(int i=0; i<n; i++){
        mul*=arr[i];
    }
    cout << mul << endl;
    return 0;
}