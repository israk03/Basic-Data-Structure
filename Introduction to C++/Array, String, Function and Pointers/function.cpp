#include<bits/stdc++.h>
using namespace std;

string sserase(string s)
{     // in void: string erase(string &s)
    s.erase(s.begin());
    s.erase(s.begin() + s.size()-1);
    return s;
}  

int main(){
    string s;
    cin>>s;
    string ans = sserase(s);

    cout << s << endl;
    cout << ans << endl;

    return 0;
}