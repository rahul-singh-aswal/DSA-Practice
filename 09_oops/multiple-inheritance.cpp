#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void bark()
    {
        cout << "barking" << endl;
    }
};

class Human
{
public:
    string color;

public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

// multiple inheritance

class Hybird : public Animal, public Human
{
};

int main()
{
    Hybird obj1;

    obj1.speak();
    obj1.bark();

    return 0;
}