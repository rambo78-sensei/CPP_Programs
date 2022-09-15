/* Ask the user for the size of the array
    Ask the user for all the array elements 
    Add all the elements and give their sum */

#include<iostream>
using namespace std;

int main()
{
    int n,max=0;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int A[n];

    cout<<"Enter all the values of the array\n";
    for(int i=0; i<n; i++)
    {
        cin>>A[i];

    }

    for(int i=0;i<n;i++)
    { 
        if (A[i]>max)
        max=A[i];

    }
    
    cout<<"The biggest number among the whole array is "<<max;


}