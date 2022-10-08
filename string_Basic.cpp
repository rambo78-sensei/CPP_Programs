/* String is a collection of characters or letters(alphabets)
    There are two ways of representing a string
    I--> Using char Array
    II--> Class String
    "\0" is called null charcter or string delimiter.It's a combination of backlash and zero.
        It act as string delimiter

    Various ways of declaring an array under the "using Char Array " are given below
    
    The "cin" character can only accept a single word at a time
    Even if we give two words in a string, the cin character is only 
    going to accept a character at a time
*/

#include<iostream>
using namespace std;
int main()
{
    char A[10] = "Hello";
    cout<<A<<endl;

    char B[] = {'h','e','l','l','o','\0'};
    cout<<B<<endl;

    char C[] = {65,66,67,68,0};
    cout<<C<<endl;

    char s[20];
    cout<<"Enter a string";
    cin>>s;
    cout<<"Welcome "<<s<<endl;

    return 0;




    return 0;



}