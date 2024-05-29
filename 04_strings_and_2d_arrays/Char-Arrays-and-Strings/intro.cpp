#include <bits/stdc++.h>
using namespace std;

// Function to get length of string in a character array
int getlength(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

// Function to reverse a string in a character array
void reverse(char ch[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(ch[start++], ch[end--]);
    }
}

// Function to convert to lower case

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

// Function to check palindrome
bool checkPalindrome(char ch[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        if (toLowerCase(ch[start]) != toLowerCase(ch[end]))
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }

    return 1;
}

int main()
{
    char name[20];

    cout << "Enter your name " << endl;
    cin >> name;
    // name[2] = '\0';

    cout << "Your name is " << name << endl;

    cout << "Length of string: " << getlength(name) << endl;

    int len = getlength(name);
    reverse(name, len);

    cout << "Reversed string : " << name << endl;

    cout << "Palindrome or Not : " << checkPalindrome(name, len) << endl;

    cout << "Character is " << toLowerCase('b') << endl;

    cout << "Character is " << toLowerCase('B') << endl;

    string str;
    cin >> str;
    cout << str;

    return 0;
}