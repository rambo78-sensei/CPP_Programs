// age< 12 yearOs, age > 50 years are eligible
// COMPOUND STATEMENT, LOGICAL OR OPERATOR

#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter the age "<<endl;
    cin>>age;

    if(age<=12 || age>=50)
        cout<<"ELIGIBLE"<<endl;
    else   
        cout<<"NOT ELIGIBLE"<<endl;
    return 0;
}