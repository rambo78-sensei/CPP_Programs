/*  Ask the user for the dimesnsion of the two matrices named say A & B
    Ask the user to insert the elements 
    Returns the new matrices with the performed operation 
1.Mistakes Commited ---->> used "i" in both the outer as well as inner loop
2.Mistakes Commited ---->> used A,B,C,D[m][n] instead of A,B,C,D[i][j] inside the loop
3.Mistakes Commited ---->> Initiazed A,B,C,D[m][n] earlier bfore taking the input values of m and n;
 */

#include<iostream>
using namespace std;

int main()
{
    int m,n;
    /* int A[m][n],B[m][n],C[m][n],D[m][n]; 
     Declaring array initially in this manner will result in an error 
    bcz some garbage value gets initiazed for both the matrices m and n values inside A,B,C,D
    Next when u take the values for m and n from user, only the m and n vlaues gets updated
    The values of m and n residing in the A[m][n],B[m][n],C[m][n],D[m][n] doesn't change
    bcz updating values of m and n is different from updating values of A[m][n],B[m][n],C[m][n],D[m][n]
    Therefore it's mandatory to first take the values of m and n from the user
    and then declare A[m][n],B[m][n],C[m][n],D[m][n] */

    cout<<" Enter the number of rows and columns for the matrix respectively ";
    cin>>m>>n;

    int A[m][n],B[m][n],C[m][n],D[m][n];

    cout<<"Enter the "<<m*n<<" elements for the 1st matrix \n";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>A[i][j];
        }
        
    }

    cout<<"Enter the "<<m*n<<" elements for the 2nd matrix \n";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>B[i][j];
        }
       

    }

    /* Multiplication */
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
           C[i][j]=A[i][j] * B[i][j];

        }

    }


    /*Subtraction */
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            D[i][j]=A[i][j] / B[i][j];
            
        }

    }

    /*Display Addition*/
    cout<<" The addition of the two matrices are\n";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<C[i][j]<<" ";
        }

        cout<<endl;

    }

    /* Display Subtraction */
    cout<<"The subtraction of the two matrices are \n";
    for (int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<D[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;

}
