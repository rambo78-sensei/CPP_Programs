/* The given program helps us to find the greatest common divisor or the highest common 
factor of a number*/

#include<iostream>
using namespace std;

int main()
{
    int m,n;

    cout<<"Enter any two numbers\n ";
    cin>>m>>n;

    while(m!=n)
    {
        if(m>n)
        {
            m=m-n;
        }
        else
            n=n-m;
    }

    cout<<"The Greatest common divisor is "<<m<<" = "<<n<<endl;
}