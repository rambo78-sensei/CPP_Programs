#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three numbers respectively";
    cin>>a>>b>>c;

    if( a>b && a>c)
    {
        cout<<a<<"is the biggest number";
    }
    else if(b>c){
        cout<<b<<"is the biggest number";
    }
    else
        cout<<c<<"is the greatest number";
}
