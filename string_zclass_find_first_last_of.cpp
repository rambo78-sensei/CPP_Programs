#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str1 = "Hello world";
    string str2 = "zxr";
    char chr = 'o';
    
    cout<<"The main string is "<<str1<<" and the character to be found is "<<chr<<endl;
    cout<<"The character in the main string is found at "<<str1.find_first_of('o')<<endl;
    cout<<"The character in the main string is found at "<<str1.find_first_of(chr)<<endl;
    cout<<"The character in the main string is found at "<<str1.find_last_of(chr,5)<<endl;
    cout<<"The character in the main string is found at "<<str1.find_last_of('o',5)<<endl;

    cout<<"The main string is "<<str1<<" and the string to be found is "<<chr<<endl;
    cout<<"The substring in the main string is found at "<<str1.find_first_of(str2)<<endl;
    cout<<"The substring in the main string is found at "<<str1.find_first_of("zxr")<<endl;
    



}