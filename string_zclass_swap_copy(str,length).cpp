/* The s1.swap(s2) function helps us to swap the contents
        present inside the strings with one another 
    s.copy(<array name>,<number of letters to be copied from the string s>) function will copy 
        the contents from the string and paste it in the array of the characters  */

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = "Bye";

    cout<<"The contents of the string 1 before swap operation is "<<str1<<endl;
    cout<<"The content of the string 2 before swap operation is "<<str2<<endl;
    str1.swap(str2);
    cout<<"The contents of the string after the swap operation is "<<str1<<endl;
    cout<<"The contents of the string after the swap operation is "<<str2<<endl;

    string str3 = "Hello";
    char a[100];
    cout<<"The initial contents in the array before the copy operation is "<<a[100]<<endl;
    str3.copy(a,5);
    cout<<"The contents in the array after the copy operation is "<<a<<endl;
    str3.copy(a,str3.length());
    cout<<"The contents in the array after the copy operation with the second method is "<<a<<endl;






}