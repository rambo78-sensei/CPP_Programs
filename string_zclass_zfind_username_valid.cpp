/* Extract the username fromt the email id 
    and check wether it's valid or not */

#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
    string str1 = "rohitsblegaum@gmail.com";
    string str2;
    int index,res=0;
    float aa= +INFINITY;
    float bb = -INFINITY;
    
    index=str1.find('@');
    str2.resize(index);

    str2=str1.substr(0,index);
    str2[index]='\0';

    for(int i=0;str2[i]!='\0';i++)// Not getting the output when using str2[i]!=0 in for Loop
    {
        if  ((str2[i]>=65 && str2[i]<=90) || (str2[i]<=97 && str2[i]>=122) || str2[i]=='_'||
                str2[i]=='.'||(str2[i]>=48 && str2[i]<=57))
            {
                res;
            }
        else
            {
            res++;
            }
    }
    
    cout<<res<<endl;

    if(res==0)
    {
        cout<<"The username "<<str2<<" is a valid username";
    }
    else
    {
        cout<<"The username "<<str2<<" is not a valid username";
    }

}
