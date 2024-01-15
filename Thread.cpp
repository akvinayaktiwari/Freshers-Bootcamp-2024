#include <bits/stdc++.h>
using namespace std;

class Thread{
    private:
    int id;
    string state;
    string priority;
    string culture;
    public:
    void Thread(){
        this->state="Started";
    }
    void start(){
        this->state="Started";
    }
    void sleep(){
        this->state="sleep";
    }
    void wait(){
        this->state="wait";
    }
    void suspended(){
        this->state="suspended";
    }
};

int main() {
  
    return 0;
}
