#include <iostream>

#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "Rahul";
    m[2] = "Singh";
    m[13] = "Aswal";

    m.insert({7, "Bhanu"});

    cout << "Before erase" << endl;

    for (auto i : m)
    {
        cout << i.first << "  " << i.second << endl;
    }

    cout << "Finding 13 -> " << m.count(13) << endl;
    cout << "Finding 9 -> " << m.count(9) << endl;
    m.erase(13);

    cout << "After erase" << endl;

    for (auto i : m)
    {
        cout << i.first << "  " << i.second << endl;
    }

    cout << endl;

    auto it = m.find(2);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << "  " << (*i).second << endl;
    }

    return 0;
}