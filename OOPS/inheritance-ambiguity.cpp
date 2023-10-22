#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    void func() {
        cout << "Function of A" << endl;
    }

};

class B {
    public:
    void func() {
        cout << "Function of B" << endl;
    }

};

class C:public A, public B {

};

int main()
{
    C obj1;

    // obj1.func();

    obj1.A::func();
    obj1.B::func();
    



    return 0;
}