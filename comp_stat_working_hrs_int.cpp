//C working hrs = 9 am to 6 pm , leisure hrs= rest time
// COMPOUND STATEMENT && LOGICAL OPERATOR &&

#include<iostream>
using namespace std;

int main()
{
    int hrs;
   cout<<" Enter the Time in 24 hrs system"<<endl;
   cin>>hrs;

   if(hrs>=9 && hrs<=18)
        cout<<"working hours"<<endl;
    else
        cout<<"leisure hours"<<endl;
    return 0;
}