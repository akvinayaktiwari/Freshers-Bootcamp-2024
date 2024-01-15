#include <bits/stdc++.h>
using namespace std;

class Thread{
    private:
    int id;
    string state;
    string priority;
    string culture;
    void notify(){
        return;
    }
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
    void subscribe(IObserver observer){
        return;
    }
    void unsubscribe(IObserver observer){
        return;
    }
};

class IObserver(){
    public:
    virtual void update()=0;
}
class ConcreteObserver:public IObserver{
    public:
    void update(){
        return;
    }
}

int main() {
  
    return 0;
}
