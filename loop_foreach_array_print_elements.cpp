/* structre of "for each" loop

for( <data type> <any_variable_name> : <Array_name> )
{
    process/statement block;
}

The "for each" loop is being read as "for each <variable_name> in <Array_Name>"
"for each" loop is used to access all the values in array without mentioning the size;*/ 



#include<iostream>
using namespace std;

int main()
{
    int A[5] = { 2,4,6,8,10};

    for( int x:A)
    {
        cout<<x<<endl;

    }
}