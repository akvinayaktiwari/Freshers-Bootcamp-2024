#include <iostream>
#include <memory>
using namespace std;

class B;

class A {
    public:
    shared_ptr<B> b;
    ~A() { cout << "~A()\n"; }
};

class B {
    public:
    shared_ptr<A> a;//here we should use a weak pointer to avoid cylic dependency
    ~B() { cout << "~B()\n"; }
};

void useAnB() {
    auto a = make_shared<A>();
    auto b = make_shared<B>();
    a->b = b;
    b->a = a;
}

int main() {
    useAnB();
    cout << "Finished using A and B\n";
    return 0;
}
