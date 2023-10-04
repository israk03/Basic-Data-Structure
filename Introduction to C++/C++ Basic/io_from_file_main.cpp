// input-output from file, method: main

#include<iostream>
#include<fstream>
using namespace std;
int main(){

    // output stream
    ofstream of1;
    of1.open("1.txt");

    ofstream of2;
    of2.open("2.txt");

    of1 << "Hello of1" << endl;
    of2 << "Hello of2" << endl;

    // input stream
    ifstream ifs1;
    ifs1.open("0.txt");
    int x;
    ifs1 >> x;
    cout << x << endl;

    of1.close();
    of2.close();
    ifs1.close();

    return 0;
}