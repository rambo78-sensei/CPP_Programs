/* The s.pop_back() funtion helps us in taking a character from the end of the string
    The s.push_back('') function helps us in inserting a character at the end of the string*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str = "Programming";
    cout<<"The initial string is "<<str<<endl;
    str.pop_back();
    cout<<"The string after the pop operation is "<<str<<endl;
    str.push_back('g');
    cout<<"The string after the push operation is "<<str<<endl;
}
