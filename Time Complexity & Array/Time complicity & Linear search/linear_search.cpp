#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>> a[i];
    }

    for(int i=0; i<n; i++){
        if(a[i]==k){
            cout << i << endl;
            cout << "YES" << endl;
            break;
        }
    }
    return 0;
}

/* 
    Time complexity = O(n)
    Memory complexity = O(n)


 */