#include<iostream>
using namespace std;


//write a pow() function here 
int pow(int x, int y)
{
    int p=2;
    for(int i=0; i<y; i++)
    {
        p=p*x;
    }
    
    return p;
}

void Main()
{
    cout<<pow(2,5);
}
