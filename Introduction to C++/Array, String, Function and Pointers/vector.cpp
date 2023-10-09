/* 
    declare:
            vector<data_type> variable_name
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;

    for(int i=0; i<5; i++){
        a.push_back(i);
    }

    for(int i=0; i<5; i++){
        cout << a[i] << endl;
    }

    return 0;
}