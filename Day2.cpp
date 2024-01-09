#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool search(vector<int> arr,int tar){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==tar) return 1;
    }
    return 0;
}
int main() {
    // Write C++ code here
    vector<int> arr{1,2,12,23,45,23,12,5,80,76};
    int n=15;
    cout<<search(arr,n);

    return 0;
}
