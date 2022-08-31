#include<iostream>
using namespace std;

int main()
{
    float p,r,t,i,a;

    cout<<"Enter the Princpal sum, Rate of interest, Time Period respectively";
    cin>>p>>r>>t;
    i=(p*r*t)/100;
    a=p+i;
    cout<<"The final amount after the simple interest is 100"<<a;
    return 0;
}