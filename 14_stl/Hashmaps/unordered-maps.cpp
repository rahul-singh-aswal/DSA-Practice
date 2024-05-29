#include <bits/stdc++.h>
using namespace std;

int main()
{
    // creation
    unordered_map<string, int> mp;

    // insertion
    // 1
    pair<string, int> pair1 = make_pair("babbar", 3);
    mp.insert(pair1);

    // 2
    pair<string, int> pair2("mera", 4);
    mp.insert(pair2);

    // 3
    mp["love"] = 5;

    // What will happen
    mp["love"] = 7;

    // search
    cout << mp["mera"] << endl;
    cout << mp.at("babbar") << endl;
    // cout << mp.at("unknownKey") << endl;
    cout << mp["unknownKey"] << endl;
    cout << mp.at("unknownKey") << endl;

    // size
    cout << mp.size() << endl;

    // check if key is present or not
    cout << mp.count("bro") << endl;
    cout << mp.count("love") << endl;

    // erase
    mp.erase("love");
    cout << mp.size() << endl;

    // traversing using loop
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }

    // traversing using iterator
    unordered_map<string, int>::iterator it = mp.begin();
    while (it != mp.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}