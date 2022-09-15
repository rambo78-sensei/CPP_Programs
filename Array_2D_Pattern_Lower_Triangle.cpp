/* Nested "for" loop helps us to generate the 2D array
    Using the nested "for" loop draw the pattern of lower triangle
    LOGIC USING I,J AND REALTIONAL OPERATOR CONDITION

    0 1 2 3
0   *
1   * *
2   * * *
3   * * * *
*/

#include<iostream>
using namespace std;

int main()
{
    int n,i,j;

    cout<<"Enter the size of the upper triangle which needs to be printed on square plane ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i>=j)
                cout<<"*";
             else 
                cout<<" ";
        }
        cout<<endl;

    }
}