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

    return 0;
}
