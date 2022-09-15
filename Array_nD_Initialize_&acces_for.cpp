/* Array can be initialized in two ways as follow
1st Method --> A[2][3]={{2,5,9},{6,9,15}};
2nd Method --> A[2][3]= {2,5,9,6,9,15};
Both the methods 1 & 2 wil result in the 2 dimensional matrix in same way as follow
columns =   0 1 2
    row 0  |2 5 9  |
     row 1 |6 9 15 |

*/

#include<iostream>
using namespace std;

int main()
{
    int A[2][3]={ 2,5,9,3,5,15};

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}