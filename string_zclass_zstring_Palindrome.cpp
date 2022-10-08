/* For a given word, find out wether it is a palindrome or not */
#include<iostream>
#include<string>

using namespace std;

int main()
{ 
    string str1 = "madam";
    string str2 = "";
    int length = 0;

    for(int i=0; str1[i]!='\0'; i++)
    {
        length++;
    }

    cout<<length;
    // It is necessary to declare the size of the second string in which elements are
    //        being getting copied bcz if the size of that string is not declared then compiler 
    //            might automatically give the 2nd string  some smaller size due to which the string's
    //            bcomes inaccessible and leading to a segmentation error

    str2.resize(length);

    
    
    for(int i=0,j=length-1; i<length; i++,j--)
    {
        str2[i]=str1[j];
        
    }
    str2[length]='\0';
    
    cout<<str2<<endl;

    if(str1.compare(str2)==0)
    {
        cout<<"The given string "<<str1<<" is Palindrome";
    }
    else
    {
        cout<<"The given string is "<<str1<<" is not a Palindrome";
    }
    ; 

}    