/* Here we declare the size of the array and initialize the array */

#include<iostream>
using namespace std;

int main()
{
    int A[5] = { 2,4,6,8,10};
    cout<<A[0]<<endl;

    for ( int i = 0; i<5; i++)
    {
        cout<<A[i]<<endl;
        
    }
    return 0;
}