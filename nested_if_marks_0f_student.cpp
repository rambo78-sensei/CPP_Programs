#include<iostream>
using namespace std;

int main()
{
    int m1,m2,m3,avg;
    cout<<"Enter the marks in three subject respectively";
    cin>>m1>>m2>>m3;

    avg=(m1+m2+m3)/3.0;

    if(avg>=60)
    {
        cout<<" The grade of the student is A";
    }
    else if(avg>=35 && avg<60)
    {
        cout<<"The grade of the student is B";
    }
    else
    {
        cout<<"The grade of the student is C";
    }
    return 0;
}