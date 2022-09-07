#include<iostream>
using namespace std;

int main()
{
    int d;
    cout<<"Enter any day number in between 1 to 7"<<endl;
    cin>>d;

    if(d==1)
    {
        cout<<"The day is Sunday";
    }
    else if( d==2)
    {
        cout<<"The day is Monday";
    }
    else if( d==3)
    {
        cout<<"The day is Tuesday";
    }
    else if(d==4)
    {
        cout<<"The day is Wednesday";
    }
    else if(d==5)
    {
        cout<<"The day is Thursday";
    }
    else if(d==6)
    {
        cout<<"The day is Friday";
    }
    else if(d==7)
    {
        cout<<"The day is Saturday";
    }
    else
        cout<<"Invalid Input Number";

}