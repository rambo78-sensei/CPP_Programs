/* Ask the user for the size of array
    Ask the user to add all the elements
    Find out the smallest element among the whole array */

#include<iostream>
using namespace std;

int main()
{
    int n,min=0;
    cout<<"Enter the size of the array\n";
    cin>>n;

    int A[n];

    cout<<"Enter "<<n<<" elements for the array ";

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

   
    for(int i=0;i<n;i++)
    {
        if (A[i]<min)
        {
            min=A[i];
        }
    }

    cout<<"The smallest element among all the elements of the arrays is "<<min;

}