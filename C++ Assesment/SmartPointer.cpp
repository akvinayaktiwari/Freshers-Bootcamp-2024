#include<bits/stdc++.h>
using namespace std;

class A{
    
    public:
    ~A(){
        cout<<"A is destructed"<<endl;
    }
};


class SmartPointerTypeForA{
    A* rawPtr;
    public:
    SmartPointerTypeForA(A* ptr): rawPtr(ptr){}
    ~SmartPointerTypeForA(){
        delete rawPtr;
        cout<<"smart pointer destructed"<< endl;
    }
};

void init(){
    SmartPointerTypeForA smartPtr{ new A() };
    
}


class B{
    
    public:
    ~B(){
        cout<<"B is destructed"<<endl;
    }
    void methodB(){cout<<"method B called"<<endl;}
};
template<typename T>
class SmartPointer{
    T* rawPtr;
    public:
    SmartPointer(T* ptr): rawPtr(ptr){}
    ~SmartPointer(){
        delete rawPtr;
        cout<<"smart pointer destructed"<< endl;
    }
    T& operator*() const {
		return *rawPtr;
	}
	T* operator->() const {
		return rawPtr;
	}
};

void init1(){
    SmartPointer<A> smartPtrA{ new A() };
    SmartPointer<B> smartPtrB{ new B() };
    smartPtrB->methodB();
    
}



int main(){
    
    init();
    init1();
    return 0;
}
