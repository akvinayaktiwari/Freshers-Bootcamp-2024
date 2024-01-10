#include <bits/stdc++.h>
using namespace std;

class Requirement{
    public:
    vector<int> givenVector;
    
    vector<int> filter(bool* (*cond)){
        vector<int> result;
        for(auto element:givenString){
            if(cond(element)){
                result.push_back(element);
            }
        }
        return result;
    }
};
class Condition{
    public:
    bool startWithA(vector<int> givenString){
        if(givenVector.at(0)=='A'){
            return true;
        }
        return false;
    }
    // void displayOnTerminal(){
    //     for(auto element:results){
    //         cout<<element;
    //     }
    // }
};

///////updated

class ConsoleDisplayController{
    private:
    string content;
    public:
    void setContent(string msg){
        this->content=msg;
    }
    void display(){
        cout<<this->content;
    }
    
};
class StartWithStrategies{
    private:
    char startWith;
    public:
    void setStartWith(char key){
        this->startWith=key;
    }
    bool invoke(string item){
        return item.at(0)==this->startWith;
    }
    
};

class StringListFilterController{
    public:
    StartWithStrategies condition;
    vector<string> filter(vector<string> strList){
        vector<string> result;
        condition.setStartWith('A');
        for(auto ele:strList){
            if(condition.invoke(ele)){
                result.push_back(ele);
            }
        }
        return result;
    }
    
};

int main() {
    return 0;
}
