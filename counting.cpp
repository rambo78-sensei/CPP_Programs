#include<iostream>
using namespace std;

int main()
{
    int lower,upper,digit,main,count=0;
    cout<<"Enter the Number, Upper limit, lower limit,digit to be counted";
    cin>>main>>lower>>upper;
    

    for( int i = lower; i<=upper;i++)
    {
        if(i==main)
        {
            count=count+1;

        }
    }
    cout<<"The number occured for"<<count<<"times";
}