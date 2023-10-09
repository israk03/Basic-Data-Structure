#include<bits/stdc++.h>
using namespace std;
int main(){

    // declare
    string s;
    s = "Declaring the string.";
    cout << s << endl;

    // user input
    string a;
    cout << "Enter your string: ";
    getline(cin, a);
    cout << "You entered: " << a << endl;

    // length
    int length = a.size();  // a.length();
    cout << length << endl;

    // delet first or any character
    a.erase(a.begin() + 0);
    cout << a << endl;

    // delet last character
    a.erase(a.begin() + a.size()-1);
    cout << a << endl;


    return 0;
}