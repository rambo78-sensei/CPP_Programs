#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter any two integer values"<<endl;
    cin>>x>>y;

    if(x>y)
        cout<<"The biggest number among the two number is "<<x;
    else
        cout<<"The biggest number among the two number is"<<y;
    return 0;
}