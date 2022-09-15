/* The "auto" used in the "for each" loop is a special character which automatically 
    copy the data type which was used while declaring the array in order to perform 
    any operation in the whole "for each" loop*/ 


#include<iostream>
using namespace std;

int main()
{
    int A[5]={2,4,6,8,10};

    for(auto x: A)
    {
        cout<<x<<endl;
    }
    return 0;

}