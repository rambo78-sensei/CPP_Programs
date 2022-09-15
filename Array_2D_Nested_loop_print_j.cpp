/* Nested "for" loop usage in order to print the values of j */

#include<iostream>
using namespace std;

int  main()
{
    int i,j;

    for(int i=0; i<4; i++)
    {
        for( int j=0; j<4;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}