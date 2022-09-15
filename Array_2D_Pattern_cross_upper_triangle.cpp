/* Nested "for" loop helps us to generate the 2D array
    Using the nested "for" loop draw the pattern of coross upper triangle
LOGIC USING I,J 
    0 1 2 3
0   * * * *
1   * * * 
2   * *    
3   *         
*/

#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter the size of triangle which you want to print on the square plane ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for ( int j=0; j<n; j++)
        {
            if(i+j<n)
                cout<<"*";
            else
                cout<<" ";


        }
        cout<<endl;

    }
    return 0;
}

