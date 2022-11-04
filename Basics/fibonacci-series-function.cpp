#include<iostream>
using namespace std;

int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    if (n <= 1){
        return n;
    }
    else {
        for (int i = 2; i < n; i++)
    {
        int next = a + b;
        a = b;
        b = next;
    } 
      return b;

    }
    
}

int main()
{
    int n;
    cin >> n;
    
    cout << "The " <<n<<"th term of the fibonacci series is : "<< fibonacci(n) << endl;

    return 0;
}