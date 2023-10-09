#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 10;

    int *y = &x;

    cout << x << endl;  // value of x
    cout << y << endl;  // x's memory value
    cout << *y << endl; // value of x

    return 0;
}