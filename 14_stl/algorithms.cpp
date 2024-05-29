#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "6 is present? -> " << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "2 is present? -> " << binary_search(v.begin(), v.end(), 2) << endl;

    cout << "Lower bound -> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    cout << "Upper bound -> " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 7;
    int b = 8;

    cout << "Max -> " << max(a, b);
    cout << "Min -> " << min(a, b);

    cout << "Before swapping" << endl;
    cout << "a -> " << a << endl;
    cout << "b -> " << b << endl;

    swap(a, b);

    cout << "After swapping" << endl;
    cout << "a -> " << a << endl;
    cout << "b -> " << b << endl;

    string abcd = "abcd";
    cout << "Before reverse -> " << abcd << endl;
    reverse(abcd.begin(), abcd.end());
    cout << "After reverse -> " << abcd << endl;

    cout << "Before rotation" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    rotate(v.begin(), v.begin() + 2, v.end());

    cout << "After rotation" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // sort
    cout << "Before sort" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    sort(v.begin(), v.end());

    cout << "After sort" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}