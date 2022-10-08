/* The "get" function is used to read multiple characters at a same time
    The drawback for the get function is that when get function is used 2 times it doesn't
    accept the input 2nd time because when we press "Enter " key , it even accepts the enter key
    as a new word for the second get function */
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char s[100];
    char s2[100];

    cout<<"Enter your Name ";
    cin.get(s,100);
    cout<<"Welcome "<<s<<endl;
    
    cin.get(s2,100);
    cout<<" Welcome "<<s2<<endl;
    return 0;
    
}