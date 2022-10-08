/*s.compare(str) helps us to compare the two strings and gives result in terms of posstive 
        and negative number by comparing it in the dictionary like manner 
    if str1>str2= +value
    if str1<str2= -value
    if str1=str2= 0
    
    */

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str1 = "hello";
    string str2 = "hello";
    string str3 = "Hello";


    cout<<"since the str1 and str2 have the same contents inside them ";
    cout<<"therefore the result value is <"<<str1.compare(str2)<<"> zero"<<endl;
    cout<<"since ascii value of h is greater than the H";
    cout<<" the comparison of string 1 with the string 3,will give value <"<<str1.compare(str3)<<">";
}