/* For a number given say 45678:--> we are supposed to display all the digits i.e 4, 5, 6, 7,8 */

#include<iostream>
using namespace std;

int main()
{
    int n,r;
    cout<<"Enter any n digit Number\n";
    cin>>n;

    while(n>0)
    {
        r=n%10;
        n=n/10;
        cout<<r<<"\n";
    }
}

