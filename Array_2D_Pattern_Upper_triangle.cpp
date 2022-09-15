/* Nested "for" loop helps us to generate the 2D array
    Using the nested "for" loop draw the pattern of upper triangle
LOGIC USING I,J AND REALTIONAL OPERATOR CONDITION
    0 1 2 3
0   * * * *
1     * * *
2       * *
3         *
*/

#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter the size of upper triangle to planted on the square Plane";
    cin>>n;

    for ( int i=0; i<n; i++)
    {
        for (int j=0; j<n;j++)
        {
            if(i<=j)
                cout<<"*";
            else 
                cout<<" ";
        }
        cout<<endl;
    }
}