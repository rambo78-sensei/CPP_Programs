#include<iostream>
using namespace std;

int main()
{   int n,sum=0;
    cout<<"Enter how many numbers whose average you want to take ";
    cin>>n;

    int a[n]={};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"Average is "<<sum/n;

}