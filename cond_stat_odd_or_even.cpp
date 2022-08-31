#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any Number";
    cin>>n;

    if(n%2==0)
        cout<<"The given nnumber "<<n<<" is a even number"<<endl;
    else
        cout<<"The given number "<<n<<" is a odd number"<<endl;
    return 0;
}