/* using A[] in cout shows error. Hence "cout<<A[]" cannot be used
Here array declaration "A[]" is used. The compiler automatically decides the size of th array
Here we can't use the for loop, since the number of iterating steps are not known bcz the array 
size was not declared initially */

#include<iostream>
using namespace std;

int main()
{
    int A[] = {1,2,3,4,5}; 
    cout<<A[0];

    
    return 0;
}