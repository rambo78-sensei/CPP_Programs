/* Write a program to count the number of strings where the strings length is 2 0r more and the first
and last characters are same from a given  list of string */
#include<iostream>
#include<string>
using namespace std;
int  main() 
{   int len;
    string str1;
    getline(cin,str1);
    len=str1.length();
    if(len==2)
    {
        if(str1[0]==str1[len])
        {
            cout<<str1;

        }
        else
        {
            cout<<"Invalid String";
        }
    }


}