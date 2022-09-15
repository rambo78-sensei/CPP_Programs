#include<iostream>
using namespace std;

int main()
{   
    int n,sum=0;
    cout<<"Enter the sie of the array ";
    cin>>n;

    int A[n];

    cout<<"Enter "<<n<<" elements for array ";
    for(int i = 0; i<n; i++)
    {
        cin>>A[i];
    }

    for(int i=0;i<n;i++)
    {
        sum=sum+A[i];
    }

    cout<<"The sum of all the elements of the array is "<<sum;
}