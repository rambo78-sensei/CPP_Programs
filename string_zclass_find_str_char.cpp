/* s.find(str) or s.find(char) functoins helps us to find the ocurrence of a string ot character 
        inside the main string */

#include<iostream>
#include<string>

using namespace std;

int main()
{
        string str1 = "Hello";
        string str2 = "ell";
        char chr = 'l';

        cout<<"The main string from which element to be found are "<<str1<<endl;
        cout<<"The string whose occurence is getting found in the main string is "<<str2<<endl;
        cout<<"The position at which the substring is being found ";
        cout<<"from the main string is "<<str1.find(str2)<<endl;
        cout<<str1.find("ell")<<endl;

        cout<<"The character found at "<<str1.find('l')<<endl;
        cout<<"The character found at "<<str1.find(chr);




}

