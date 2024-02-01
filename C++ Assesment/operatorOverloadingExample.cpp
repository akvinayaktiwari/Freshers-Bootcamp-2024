// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void printDivisibleStrings(const vector<string>& divisibleStrings) {
    for (const string& str : divisibleStrings) {
        cout << str << " ";
    }
    cout << endl;
}

class StringLengthDivisibleBy {
    public:
    int divisor;
    StringLengthDivisibleBy(int d) : divisor(d) {}
    bool operator()(const string& str) const {
        return str.length() % divisor == 0;
    }
};

vector<string> filter(const vector<string>& strings, const StringLengthDivisibleBy& criteria) {
    vector<string> result;
    for (const string& str : strings) {
        if (criteria(str)) {
            result.push_back(str);
        }
    }
    return result;
}
int main() {
    vector<string> strings = {"hello", "india", "world", "any", "things"};
    StringLengthDivisibleBy criteria(3); 
    vector<string> divisibleStrings = filter(strings, criteria);
    printDivisibleStrings(divisibleStrings);
    return 0;
}
