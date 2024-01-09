#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> filter(const vector<int>& arr,function<bool<int>> condition){
    vector<int> results;
    for(auto element:arr){
        if(condition(element)){
            results.push_back(elements);
        }
    }
    return results;
}


int main() {
    

    return 0;
}
