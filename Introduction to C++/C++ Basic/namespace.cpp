/* same name global variable not allow,
that's why we use namespace function and
by namespace function we can use the "cout"
function. */

#include<bits/stdc++.h>
using namespace std;    // for "cout" function

int x=5, y, z;
int func(int a, int b){
    return a+b;
}

namespace info{
    int x=10;
}

int main(){

    cout << x << endl;              // output:5
    cout << info::x << endl;        // output: 10

    return 0;
}