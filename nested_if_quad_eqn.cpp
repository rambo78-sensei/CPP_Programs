#include<iostream>
using namespace std;

int main()
{
    float a,b,c,d,r1,r2,r;
    cout<<"Enter the values of a,b,c";
    cin>>a>>b>>c;

    d=b*b- 4*a*c;
    if(d==0)
    {
        cout<<"The roots are real and equal"<<endl;
        cout<<r<<" = "<<r1<<" = "<<r2<<" "<<-b/(2*a)<<endl;
   }
    else if(d>0)
    {
        cout<<"The roots are real and unequal"<<endl;
        cout<<r1<<" = "<<(-b+d)/(2*a)<<endl;
        cout<<r2<<" = "<<(-b-d)/(2*a)<<endl;
    }
    else
    {
        cout<<"The roots are imaginary"<<endl;
    }




}  

