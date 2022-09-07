#include<iostream>
using namespace std;

int main()
{
    int n,i=1;
    cout<<"Enter the number till which you want to print\n";
    cin>>n;

    do
    {
        cout<<i<<endl;
        i++;
    }while(i<=n);

    return 0;
}