/* Pointers are Address variable. Address Variable are used for storing the address.

Declararation of Pointer " int *p; "
initialization of pointer " p = &x;"
Dereferencing of Pointer  " *p; "
Dereferencing means wherever the pointer is pionting , we are 
going to that location & accessing that data

*/

#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;// declaration and initialization of the pointer;
    cout<<" a = "<<a<<endl;
    cout<<" &a = "<<&a<<endl;
    cout<<" p = "<<p<<endl;
    cout<<" &p = "<<&p<<endl;
    cout<<" *p = "<<*p<<endl;

    return 0;
}   
