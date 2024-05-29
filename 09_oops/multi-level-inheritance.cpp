#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class Dog : public Animal
{
};

class GermanSherpherd : public Dog
{
};

int main()
{
    GermanSherpherd g;
    g.speak();

    return 0;
}