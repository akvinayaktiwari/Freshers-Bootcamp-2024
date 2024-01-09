#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> filter(vector<int>& arr,function<bool<int>> condition){
    vector<int> results;
    for(auto element:arr){
        if(condition(element)) results.push_back(elements);
    }
    return results;
}
int main() {
    // Write C++ code here
    // vector<int> arr{1,2,12,23,45,23,12,5,80,76};
    // int n=15;
    // cout<<search(arr,n);

    return 0;
}
