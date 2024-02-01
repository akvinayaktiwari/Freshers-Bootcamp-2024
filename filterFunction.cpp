##include<bits/stdc++.h>
using namespace std; 

function<bool(const string&)> isDivisibleBy(int divisor) {
    return [divisor](const string& str) {
        return str.length() % divisor == 0;
    };
}

vector<string> filter(const vector<string>& strings, const function<bool(const string&)>& criteria) {
    vector<string> result;
    for (const string& str : strings) {
        if (criteria(str)) {
            result.push_back(str);
        }
    }
    return result;
}

void printDivisibleStrings(const vector<string>& divisibleStrings) {
    for (const string& str : divisibleStrings) {
        cout << str << " ";
    }
    cout << endl;
}

int main() {
    vector<std::string> strings = {"hello", "india", "wolrd", "any","things"};
    auto isDivisibleBy3 = isDivisibleBy(3);
    
    vector<string> divisibleStrings = filter(strings, isDivisibleBy3);
    printDivisibleStrings(divisibleStrings);
    
    return 0;
}
