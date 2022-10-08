/* iterators are used for traversing or accessing all the charcters of a string
 "string::iterator" is a iterator which allows us to access a string in the forward 
        direction from left to right 
"  reverse::iterator" is a iterator which allows us to access a string in the backward
        direction from right to left 
begin() gives the beginning index  for string::iterator"
end() gives the ending index for string::iterator"
rbegin() gives beginning index for reverse::iterator"
rend() gives the ending index for reverse::iterator" */

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str= "hello world";
    string:: iterator it;
    for(it=str.begin();it!=str.end();it++)
    {
        cout<<*it;
        
    }

    cout<<endl;
    
    for(it=str.begin();it!=str.end();it++)
    {
        *it=*it-32;
        cout<<*it;
    }

    cout<<endl;

    // Printing all the elements using the for looop;
    for(int i=0; str[i]!='\0'; i++)
    {
        str[i] = str[i] - 32;
        cout<<str[i];
        
    }
        cout<<str;

}