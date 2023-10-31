#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int maxi = a[0];
    int mini = a[0];
    int sum = 0;

    for(int i=0; i<n; i++){
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
        sum = sum + a[i];
    }

    cout << maxi << endl;
    cout << mini << endl;
    cout << sum << endl;

    return 0;
}

/* 
    Time complexity = O(n+1+n+1) = O(2n+1) = O(n)
                    -> focus who are dominate
    
    Memory complexity = O(n)



 */
