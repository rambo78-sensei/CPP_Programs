// A company considers ppl aged between 12 - 50 years as "YOUNG" rest all aged ppl are considered as 
// "NOT YOUNG". write a prog for same using "COMPOUND STATEMENT" and LOGICAL OPERATOR "&&"

#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter the age "<<endl;
    cin>>age;

    if(age>=12 && age<=50)
        cout<<"YOUNG"<<endl;
    else
        cout<<"NOT YOUNG"<<endl;
    
    return 0;
}