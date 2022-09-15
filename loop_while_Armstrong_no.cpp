/* A number is a armstrong number if sum of the cube of the individual digits is equal to that number
eg 153--> 1*1*1 + 5*5*5 + 3*3*3 == 153 then it's a armstrong number
Mistake commited "i had written n=m instead of m=n ie. i assigned the value of m to m instead of assigning value of n to m */

#include<iostream>
using namespace std;

int main()
{
    int n,m,r,sum=0;
    cout<<"Enter the number which you want to check is a Armstrong number or not\n";
    cin>>n;
    
    
    m=n;

    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
        
    }
    if(sum==m)
    {
        cout<<"The number "<<m<<" is a Armstrong Number ";

    }
    else
        cout<<"The number is "<<m<<" not a Armstrong Number";
}