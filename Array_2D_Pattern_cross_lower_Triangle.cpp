/* Nested "for" loop helps us to generate the 2D array
    Using the nested "for" loop draw the pattern of coross lower triangle
LOGIC USING I,J 
    0 1 2 3
0         *
1       * *
2     * * *
3   * * * *      
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the cross lower triangle which you want to print";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0 ; j<n; j++)
        {
            if( i+j<n-1)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }
}