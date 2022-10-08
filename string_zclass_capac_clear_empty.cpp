/* s.capacity() gives us the  of capacity of the string which is being created by us
                it is always bigger than the word size present in the string
    s.clear() helps us to clear/delete everything from the string
    s.empty() helps us to denote the empty string */

#include<iostream>
#include<string>

using namespace std;

int main() 
{
    string str;
    cout<<"Enter a string "<<endl;
    getline(cin,str);
    cout<<"The capacity of the string is "<<str.capacity()<<endl;

    str.clear();
    cout<<"The string after the clear function will contain "<<str<<"nothing"<<endl;
}