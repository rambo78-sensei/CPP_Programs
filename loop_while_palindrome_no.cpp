#include<iostream>
using namespace std;

int main()
{
    int r,n,m,rev=0;

    cout<<"Enter any number\n";
    cin>>n;

    m=n;


    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }

    if(rev==m)
    {
        cout<<"The given number "<<m<<" is a palindromic number";
    }
    else
        cout<<"The given number is "<<m<<" not a palindromic number";


}