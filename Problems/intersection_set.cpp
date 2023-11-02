/* WAP that takes 2 integer arrays as input,
then computes the intersection of the two arrays.
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout << "enter the 1st set size: ";
    cin >> a;
    cout << "enter these elements: ";
    vector<int>arr1(a);
    for(int i =0; i<a; i++){
        cin >> arr1[i];
    }

    int b;
    cout << "enter the 2nd set size: ";
    cin >> b;
    cout << "enter these elements: ";
    vector<int>arr2(b);
    for(int i=0; i<b; i++){
        cin >> arr2[i];
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    vector<int>intersection;
    int i=0, j=0;

    while(i<a && j<b){
        if(arr1[i] == arr2[j]){
            intersection.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }

    if(intersection.empty()){
        cout << "No intersection set found.";
    }
    else{
        cout << "Intersection set: ";
        for(int element : intersection){
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}