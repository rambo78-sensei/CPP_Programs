/* Inside a string class, For a given string find the number of characters present inside the string
for eg string str "Hello" --  The program msut show there are 5 letters present
*/

#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
 {
    string str;
    cout<<"Enter the string";
    getline(cin,str);
    int count = 0;
    int rcount = 0;
    // using the string iterator

    string :: iterator it;

    for(it=str.begin(); it!=str.end(); it++)
    {
        count++;
    }
        cout<<count<<endl;
        

    for(int i=0; str[i]!='\0'; i++ )
    {
        if(str[i]!=' ')
        {   
            rcount++;
        }
        else
        {
            rcount;
        }
    }
    cout<<rcount<<endl;

    ///Can't use this for string class cout<<strlen(str);
    


 }