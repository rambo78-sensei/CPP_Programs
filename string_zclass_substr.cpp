/* s.substr(start)/s.substr(start,number) functon helps us to extract the portion of a string
    The number here denotes the number of letter we want from the main string */

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1 = "Programming";
    cout<<" The initial string is "<<str1<<"\n";
    cout<<"The string obtained after the substr function is  "<<str1.substr(3)<<endl;

    cout<<"The string obtained after the substr functoin is "<<str1.substr(3,4)<<endl;

}