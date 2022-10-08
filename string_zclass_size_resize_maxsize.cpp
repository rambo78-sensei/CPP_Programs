/* s.length() -- Tells us the length of the string
    s.size() -- Tells us the length of the string, same as length
    s.resize() -- It helps us to increase the capacity of the string
    s.maxsize() -- It gives us the possible maximum size a string can have on that particular compiler */

#include<iostream>
#include<string>

using namespace std;

int main() 
{
    string str1 = "Hello ";
    cout<<str1<<str1.length()<<endl;

    string str2;
    getline(cin,str2);
    cout<<str2.size()<<endl;

    cout<<"The initial size of str1 is "<<str1.size()<<endl;
    cout<<"The size of str1 after resize function is ";
    str1.resize(100);// we can't directly uses the cout<<str1.resize(100) bcz resize function 
    cout<<str1.size()<<endl;//  changes the size of the function but does not give us the size of string
    
    cout<<"The max size of the str1 is "<<str1.max_size();







}