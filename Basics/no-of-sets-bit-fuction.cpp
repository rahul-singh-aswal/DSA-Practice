#include <iostream>
using namespace std;

int setBits(int a) {
    int count = 0;
    
    while(a != 0) {
        if(a & 1) {
            count ++;
        }

        a = a >> 1;
    }
    return count;
}


int main()
{
    int a,b;
    cin>>a>>b;
    
    cout<<"Total set bits of A and B are : " << setBits(a) + setBits(b) <<endl;

  return 0;
}