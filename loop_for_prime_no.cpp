#include<iostream>
using namespace std;

int main()
{
    int n,m=0;

    cout<<"Enter the number which you want to find out is prime or not\n";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            m++;
        }

    }

    if(m==2)
    {
        cout<<n<<" is a prime number";
    }
    else 
    {
        cout<<n<<" is not a prime number";
    }

}