#include <bits/stdc++.h>
using namespace std;

// parent class
class Human
{
private:
    int height;

public:
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }

    void setWeight(int w)
    {
        this->weight = w;
    }
};

// child class
class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male is sleeping";
    }

    int getHeight()
    {
        // return this->height;
    }
};

int main()
{

    Male m1;

    // cout <<m1.height << endl;
    cout << m1.getHeight() << endl;

    /*

    Male object1;
    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;

    cout << object1.color << endl;

    object1.setWeight(75);
    cout << object1.weight << endl;

    object1.sleep();
    cout << endl;

    */

    return 0;
}