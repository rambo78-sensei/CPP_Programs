/* Linear Search is defined as a sequential search algorithm that starts at one end
 and goes through each element of a list until the desired element is found, 
 otherwise the search continues till the end of the data set. 

The "element which is searched" is called the key
Ask the user for the size of the array
Ask the user to insert all the inside the array
Ask the user to insert the value whose index in the array has to be found

*/

#include<iostream>
using namespace std;

int main()
{
    int n,key;
    cout<<"Enter the size of the array ";
    cin>>n;
    cout<<"Enter the Value inside the array whose index has to found";
    cin>>key;

    int A[n];

    cout<<"Enter the elements of the array";
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }

    for(int i=0;i<n;i++)
    {
        if(key==A[i])
        {
            cout<<"Found the value "<<key<<" at "<<i;
            return 0;/*here the "return 0;" signifies that the whole main function will terminate here
                        itself if the the cout statement is executed*/
        }

    }

    cout<<"Value "<<key<<" is not found in the array";
    return 0;/*Here the "return 0" statement signifies that the whole main function will terminate 
                here itself after the execution of the cout statement */

    










}
