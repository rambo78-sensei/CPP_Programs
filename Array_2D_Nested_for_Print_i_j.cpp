/* Using Nested "for " loop, we can generate a 2D array
    Here we are going to the print the values of two "for " loop variable i & j */

#include<iostream>
using namespace std;

int main()
{
    int i,j;

    for (int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<"("<<i<<","<<j<<") ";
        }
        
        cout<<endl;

    }
}