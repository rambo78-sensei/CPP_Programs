/* structre of "for each" loop

for( <data type> <any_variable_name> : <Array_name> )
{
    process/statement block;
}

The "for each" loop is being read as "for each <variable_name> in <Array_Name>"
"for each" loop is used to access all the values in array without mentioning the size;

"&" --> This character is used in the array in order to make changes in the original array;
*/ 

#include<iostream>
using namespace std;

int main()
{
    
    int A[2][3];
    cout<<"Enter 6 values for the array";
    
    for(auto& x:A)
    {
        for(auto& y:x)
        {
            cin>>y;
        }

    }

    for(auto& x:A)
    {
        for(auto& y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }





}