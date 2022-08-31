#include<iostream>
using namespace std;

int main()
{
    int roll_no;
    cout<<"Enter a roll number";
    cin>>roll_no;

    if(roll_no < 1)
        cout<<"Invalid Roll Number";
    else
        cout<<"Valid Roll Number";  
    
return 0;
}