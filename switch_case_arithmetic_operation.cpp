#include<iostream>
using namespace std;

int main()
{
    float x,y;
    int choice;
    cout<<"Menu";
    cout<<"Select any operation of your choice and Enter the number corrsponding to it\n"
    <<"1. Add\n"<<"2. Subtract\n"<<"3. Multiply\n"<<"4. divide\n";
    cin>>choice;
    cout<<"Enter any two numbers";
    cin>>x>>y;

    switch(choice)
    {
        case 1:cout<< x+y;
        break;
        case 2:   cout<<x-y;
        break;
        case 3:   cout<<x*y;
        break;
        case 4:   cout<<x/y;
        break;


    }
    


}
