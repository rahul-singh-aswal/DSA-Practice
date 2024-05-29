#include <bits/stdc++.h>
#include "Villian.cpp"

using namespace std;

class Hero
{
    // properties

private:
    // char name[100];
    int health;

public:
    char *name;
    char level;
    static int timeToComplete;

    Hero()
    {
        cout << " Simple Constructor is called" << endl;
        name = new char[100];
    }
    // Parameterised Constructor
    Hero(int health)
    {
        // cout << "this-> " << this << endl;
        health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        // cout << "this-> " << this << endl;
        health = health;
    }

    // copy constructor
    Hero(Hero &temp)
    {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor is called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    // destructor
    ~Hero()
    {
        cout << "Destructor is called" << endl;
    }

    void print()
    {
        cout << endl;
        cout << " [ Name : " << this->name << ", ";

        cout << "Health : " << this->health << ", ";
        cout << "Level : " << this->level << " ]";
        cout << endl;
    }

    // Getter
    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    // Setter

    void setName(char name[])
    {
        strcpy(this->name, name);
    }
    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char a)
    {
        level = a;
    }

    // static function
    static int random()
    {
        return timeToComplete;
    }
};

int Hero ::timeToComplete = 7;

int main()
{
    cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;

    // Hero A;

    // cout << A.timeToComplete << endl;

    // Hero B;
    // B.timeToComplete = 10;

    // cout << A.timeToComplete << endl;
    // cout << B.timeToComplete << endl;

    /*
    // Static
    Hero a;

    // Dynamic
    Hero *b = new Hero();
    delete b; // manually destructor call
*/

    /*
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";

    hero1.setName(name);

    hero1.print();

    // use default constructor

    // Hero hero2(hero1) ;
    Hero hero2 = hero1;
    hero2.print();

    hero1.name[0] = 'G';
    hero1.print();

    hero2.print();

    hero2= hero1;

    hero1.print();
    hero2.print();

*/

    /*
    Hero suresh(70, 'A');
suresh.print();

// copy constructor
    Hero ritesh(suresh);
    ritesh.print();
*/

    /*
    // object created statically
    // cout << "Hi" << endl;
    Hero Ramesh(10);
    cout << "address is : " << &Ramesh << endl;
    // cout << "Hello" << endl;
    Ramesh.print();

    Hero *h = new Hero();
    h->print();

    Hero temp(22, 'D');
    temp.print();

*/

    /*
    // creating object
    // static allocation
    Hero Paul;
    Paul.setHealth(70);
    Paul.setLevel('B');

    cout << "Health is : " << Paul.getHealth() << endl;

    cout << "Level is : " << Paul.level << endl;

    // dynamic allocation
    Hero *b = new Hero;
    b->setHealth(80);
    b->setLevel('A');

    cout << "Health is : " << (*b).getHealth() << endl;

    cout << "Level is : " << (*b).level << endl;

    cout << "Health is : " << b->getHealth() << endl;

    cout << "Level is : " << b->level << endl;

    // cout << "Paul health is " << Paul.getHealth() <<endl;

    // Paul.setHealth(70);

    // Paul.health = 70;
    // Paul.level = 'A';

    // cout << "Health is : " << Paul.getHealth()  << endl;

    // cout << "Level is : " << Paul.level << endl;

    // cout << "size : " << sizeof(Paul) << endl;

    // Paul.print();
    // gives private declared error

    */

    return 0;
}