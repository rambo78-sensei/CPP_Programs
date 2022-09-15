/* we have to reverse a number which is given to us and display that number
eg--> input(153)     output(351) */

#include<iostream>
using namespace std;

int main()
{
    int rev=0,m,n,r;

    cout<<"Enter any number\n";
    cin>>n;

    m=n;

    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }

    cout<<"The reverse of number "<<m<<" is "<<rev;
}