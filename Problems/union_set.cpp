/* WAP that takes 2 integer arrays as input,
then computes the union of the two arrays.
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;

    cout << "enter the first array size: ";
    cin >> a;
    cout << "enter these elements: ";
    vector<int>arr1(a);
    for(int i=0; i<a; i++){
        cin >> arr1[i];
    }

    cout << "enter the second array size: ";
    cin >> b;
    cout << "enter these elements: ";
    vector<int>arr2(b);
    for(int i=0; i<b; i++){
        cin >> arr2[i];
    }

    // merge two array
    arr1.insert(arr1.end(), arr2.begin(), arr2.end());

    // sort 
    sort(arr1.begin(), arr1.end());

    // removing duplicate
    arr1.erase(unique(arr1.begin(),arr1.end()), arr1.end());

    cout << "Union of the two arrays: ";
    for (int element : arr1) {
        cout << element << " ";
    }
    cout << endl;
}