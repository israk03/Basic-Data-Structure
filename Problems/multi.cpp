/* WAP that takes n integer numbers, and multiply all the
numbers in the odd indexed position. Indexing starts from 0. */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "How many numbers you want to multiply: ";
    cin >> n;
    cout << "Enter those numbers: ";

    int mul=1;

    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
       
        if(i%2!=0){
            mul = mul*a[i];
        }
    }
    cout << "The result is : " << mul << endl;

    return 0;

    
}