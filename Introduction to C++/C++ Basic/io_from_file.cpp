// input-output from file, method: 01

#include<iostream>
using namespace std;
int main(){

    freopen("input.txt", "r", stdin);

    
    freopen("output.txt", "w", stdout);

    string s;
    getline(cin, s);
    cout << s << endl;


    return 0;
}
// but in this method, we can not use more than 1 file.