#include<iostream>
using namespace std;

int main()
{

    int n,sum = 0;
    cout<<"Enter the number which you want to find out is a perfect number or not\n";
    cin>>n;

    for(int i=1;i<=n; i++)
    {
        if(n % i==0)
        {
            sum = sum + i;
        }
    }
    
        if(sum == 2*n)
        {
            cout<<n<<" is a perfect number";
        }
        else
        {
            cout<<n<<" is not a perfect number";
        }
    


}