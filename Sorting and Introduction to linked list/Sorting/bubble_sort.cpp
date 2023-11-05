#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the array size: ";
    cin >> n;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    // n ta pass lagbe sort hoite
    for(int pass = 0; pass<n; pass++){
        int last = n-1-pass;
        for(int j=0; j<=last-1; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
        cout << "After pass: " << pass << " :";
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


// time complexity = O(n^2)
// memory complexity = O(n)