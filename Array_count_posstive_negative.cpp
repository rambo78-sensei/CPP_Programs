/* Ask the user for the size of the array
    Ask the user to insert all the elements inside the array
    Return the count of the number of the possitive numbers and the count of the negative*/

#include<iostream>
using namespace std;

int main()
{
    int n,pos=0,neg=0;
    cout<<"enter the  size of the array ";
    cin>>n;

    int A[n];
    
    cout<<"Enter the elements of the array \n";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    for(int i=0; i<n; i++)
    {
        if(A[i]>=0)
            pos=pos+1;
        else if(A[i]<0)
            neg=neg+1;
        
    }

    cout<<"The total number of Possitive values in the array are "<<pos<<endl;
    cout<<"The total number of the negative values in the array are "<<neg;
}