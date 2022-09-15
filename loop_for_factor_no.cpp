#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number whose factors you want to find out\n";
    cin>>n;

    for(int i = 1; i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<" is factor of number "<<n<<endl;
        }
    }
}