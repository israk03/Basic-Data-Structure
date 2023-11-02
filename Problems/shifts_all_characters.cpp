/* ## **WAP that takes a string as input, and
shifts all the characters in the even indexed
position by the following rule.**

‘a’ becomes ‘b’
‘b’ becomes  ‘c’
…
‘z’ becomes  ‘a’ */

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout << "Enter any sentence: ";
    getline(cin, str);

    for(int i=0; i<str.length(); i+=2){
        if(str[i] >= 'a' && str[i] < 'z'){
            str[i]++;
        }
        else if(str[i] == 'z'){
            str[i] = 'a';
        }
    }
    cout << "Modify string: " << str << endl;

    return 0;
}