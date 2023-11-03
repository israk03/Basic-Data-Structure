#include <bits/stdc++.h>
using namespace std;

class Array {
private:
    int* arr;
    int cap;
    int sz;

    void increase_size() {
        cap = cap * 2;
        int* tmp = new int[cap];
        for (int i = 0; i < sz; i++) {
            tmp[i] = arr[i];
        }
        delete[] arr;
        arr = tmp;
    }

public:
    Array() {
        arr = new int[1];
        cap = 1;
        sz = 0;
    }

    void PushBack(int x) {
        if (cap == sz) {
            increase_size();
        }
        arr[sz] = x;
        sz++;
    }

    void print() {
        for (int i = 0; i < sz; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int get_size() {
        return sz;
    }

    int get_element(int idx) {
        if (idx >= sz) {
            cout << "Error " << idx << " is not found." << endl;
            return -1;
        }
        return arr[idx];
    }

    // deletion part start from here
    void pop_back(){
        if(sz==0){
            cout << "Current size is 0." << endl;
        }
        sz--;
    }

    void erase(int pos){
        if(pos >= sz){
            cout << "Position doesn't exist." << endl;
            return;
            for(int i=pos+1; i<sz; i++){
                arr[i-1] = arr[i];
            }
            sz--;
        }
    }
};

int main() {
    Array a;
    a.PushBack(10);
    a.PushBack(20);
    a.PushBack(30);

    a.print();

    cout << a.get_size() << endl;

    for (int i = 0; i < a.get_size(); i++) {
        cout << a.get_element(i) << " ";
    }
    cout << endl;

    // checking deletion part
    a.pop_back();
    a.print();
    a.pop_back();
    a.print();

    a.erase(2);     // 2 = index no
    a.print();

    return 0;
}
