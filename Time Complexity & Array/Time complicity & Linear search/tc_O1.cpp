#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>> a >> b >> c;

    int maxi = max({a,b,c});
    int mini = min({a,b,c});
    int mul = a*b*c;

    cout << maxi << endl;
    cout << mini << endl;
    cout << mul << endl;

    return 0;

}
/* 
    Time complexity = O(1)
    Memory complexity = O(1)

 */