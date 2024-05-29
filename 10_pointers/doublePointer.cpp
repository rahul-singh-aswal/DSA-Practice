#include <bits/stdc++.h>
using namespace std;

void update(int **p2)
{
    // p2 = p2+1;
    // kuch change hoga?=> NO

    // *p2 = *p2+1;
    // kuch change hoga?=> YES

    **p2 = **p2 + 1;
    // kuch change hoga?=> YES
}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "Address of i : " << &i << endl;

    cout << "Printing p : " << p << endl;
    cout << "Address of p : " << &p << endl;

    cout << "Printing *p2 : " << *p2 << endl;

    cout << "Printing i : " << i << endl;
    cout << "Printing *p : " << *p << endl;
    cout << "Printing **p2: " << **p2 << endl;

    cout << "Printing &i : " << &i << endl;
    cout << "Printing p : " << p << endl;
    cout << "Printing *p2 : " << *p2 << endl;

    cout << "Printing &p : " << &p << endl;
    cout << "Printing p2 : " << p2 << endl;

    cout << endl
         << endl;

    cout << "before i : " << i << endl;
    cout << "before p : " << p << endl;
    cout << "before p2 : " << p2 << endl;

    update(p2);

    cout << "after i : " << i << endl;
    cout << "after p : " << p << endl;
    cout << "after p2 : " << p2 << endl;

    // MCQs
//1
/*
    int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout << first << " " << second << endl;
*/
    //2

    int first = 6;
    int *p1 = &first;
    int *q = p1;
    (*q)++;
    cout << first << endl;
    



    return 0;
}