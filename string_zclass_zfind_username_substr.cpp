/* Extract the username fromt the email id */

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str1 = "rohitsblegaum@gmail.com";
    string str2;
    int index;
    
    index=str1.find('@');
    str2.resize(index);

    str2=str1.substr(0,index);
    str2[index]='\0';

    cout<<"The username is "<<str2<<endl;



}
