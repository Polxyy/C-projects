#include <iostream>
#include <string>
using namespace std;

class A {
public:
    void x() { cout << "xA"; }
    virtual void y() { cout << "yA"; }
};

class B : public A {
public:
    virtual void x() { cout << "xB"; }
    virtual void y() { cout << "yB"; }
};

class C : public B {
public:
    virtual void x() { cout << "xC"; }
    virtual void y() { cout << "yC"; }
};

int main() {
    A a, * pa; B b, * pb; C c;
    a.x(); a.y(); b.x(); b.y(); c.x(); c.y();
    cout << "|";
    pa = &a; pa->x(); pa->y();
    cout << "|";
    pa = &b; pa->x(); pa->y();
    cout << "|";
    pa = &c; pa->x(); pa->y();
    cout << "|";
    pb = &b; pb->x(); pb->y();
    cout << "|";
    pb = &c; pb->x(); pb->y();
    cout << endl;
    return 0;
}