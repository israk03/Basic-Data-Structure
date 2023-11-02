/* WAP that takes n integer numbers,
and sum up all the integers in that array. */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum=0;
    cout << "How many numbers you want to sum?" << endl;
    cin >> n;
    cout << "Please enter those numbers: ";
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum = sum + a[i];
    }
    cout << "The summation of these numbers: " << sum << endl;

    return 0;
    
}