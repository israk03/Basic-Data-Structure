#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cout << "Enter the array size: ";
    cin >> n;
    cout << "Enter the targeted number: ";
    cin >> k;
    cout << "Enter these elements: ";
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int low=0, high=n-1;
    bool flag=0;
    
    while(low <= high){
        int mid = (low+high)/2;
        if(a[mid]==k){
            cout << "Yes, targeted number found." <<endl;
            cout << "Index no: " << mid << endl;
            flag = 1;
            break;
        }
        else if(a[mid] > k){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    if(flag==0){
        cout << "No, targeted number not found." << endl;
    }

    return 0;
}