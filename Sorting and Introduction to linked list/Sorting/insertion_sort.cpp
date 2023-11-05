#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the array size: ";
    cin >> n;
    cout << "Enter these elements: ";
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=1; i<n; i++){
        int idx = i;
        while(idx>=1){
            if(a[idx-1] > a[idx]){
                swap(a[idx-1], a[idx]);
                idx--;
            }
            else{
                break;
            }
        }
        cout << "Considering " << i << " index: ";
        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
       
    }

    cout << "After sorting: ";
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}