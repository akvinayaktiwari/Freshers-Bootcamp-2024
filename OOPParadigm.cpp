#include <bits/stdc++.h>
using namespace std;

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
