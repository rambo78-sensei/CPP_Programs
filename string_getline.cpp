/* The getline function is used to read multiple inputs at a time
It overcomes the drawback of the get function.*/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[100];
    char s2[200];

    cout<<"Enter your Name ";
    cin.getline(s,100);
    cout<<"Welcome "<<s<<endl;

    cout<<"Enter your Name Again";
    cin.getline(s2,100);
    cout<<"Welcome "<<s2<<endl;
    
    return 0;

}

