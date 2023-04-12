/* Determine the leat number of iterations required in order to reach the number by either adding  a number 
or by multiplying with the 2 each time for iteration*/
#include<iostream>
using namespace std;
int main()
{   
    int a;
    cout<<"Enter any Number";
    cin>>a;

     int count = 0;

    for ( int i =0;a>1;i++)
    {
        if (a%2==0)
        {
            count++;
        }
        else if(a%2==1)
        {
            a=a-1;
            count++;
        }
    }
    cout<<"count";

}