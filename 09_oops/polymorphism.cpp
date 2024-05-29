#include <bits/stdc++.h>
using namespace std;

// function overload
class A
{
public:
    void sayHello()
    {
        cout << "Hello Rahul" << endl;
    }

    int sayHello(char name)
    {
        cout << "Hello Rahul" << endl;
        return 1;
    }

    void sayHello(string name)
    {
        cout << "Hello" << name << endl;
    }
};

// operator overload
class B
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;

        cout << "output " << value2 - value1 << endl;
        cout << "Hello Rahul" << endl;
    }

    void operator()()
    {
        cout << "I'm bracket " << this->a << endl;
    }
};

class Animal
{
public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Barking" << endl;
    }
};

int main()
{

    // run-time polymorphism

    Dog d1;
    d1.speak();

    A obj;
    obj.sayHello();

    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
    obj1();

    return 0;
}