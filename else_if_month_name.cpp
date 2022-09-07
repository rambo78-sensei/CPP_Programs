#include<iostream>
using namespace std;

int main()
{
    int d;
    cout<<"Enter any month number in between 1 to 12"<<endl;
    cin>>d;

    if(d==1)
    {
        cout<<"The month is January";
    }
    else if( d==2)
    {
        cout<<"The month is February";
    }
    else if( d==3)
    {
        cout<<"The month is March";
    }
    else if(d==4)
    {
        cout<<"The month is April";
    }
    else if(d==5)
    {
        cout<<"The month is May";
    }
    else if(d==6)
    {
        cout<<"The month is June";
    }
    else if(d==7)
    {
        cout<<"The month is July";
    }
    else if(d==8)
        cout<<"The month is August";
    else if(d==9)
        cout<<"The month is September";
    else if(d==10)
        cout<<"The month is October";
    else if(d==11)
        cout<<"The month is November";
    else if(d==12)
        cout<<"The month is December";
    else
        cout<<"Invalid input number";

}