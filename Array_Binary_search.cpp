/* Binary Search is a searching algorithm used in a sorted array
 by repeatedly dividing the search interval in half. The idea of binary search is to use
  the information that the array is sorted and reduce the time complexity to O(Log n).

Ask the user for the size of the array 
Ask the user to enter the elements inside the array
Ask to user to insert the value(key) whose index needs to be found out */

#include<iostream>
using namespace std;

int main()
{
    int n,key;
    cout<<"Enter the size of the array";
    cin>>n;
    cout<<"Enter the value whose index need to be found out";
    cin>>key;

    int A[n];

    cout<<"Enter "<<n<<" values inside the array";

    for(int i=0;i<n;i++)
    {
        cin>>A[i];

    }

    int l=0, h=n-1,mid;
    while(l<=h)
    {
        mid=A[(l+h)/2];

        if(key==mid)
        {
            cout<<"The value "<<key<<" is found at the index "<<(l+h)/2;
            return 0;
        }

        else if(key<mid)
        {
            h=((l+h)/2)-1;
        }

        else
        {
            l=((l+h)/2)+1;
        }
    }

    cout<<"The given element "<<key<<" is not found in the array";
}