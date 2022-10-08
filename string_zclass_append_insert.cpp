/* s.append(" ") function helps us to add a word at the end of the current string
    s.insert(<index>,"word") helps us to add a "word" at a particular indexed location */

#include<iostream>
#include<string>

using namespace std;

int main() 
{
    string str1 = "Good";
    cout<<"The initial string was "<<str1<<endl;
    str1.append(" Evening to everyone");
    cout<<"The string after the append operation is "<<str1<<endl;

    string str2 = "Pple how are you all";
    cout<<"The string before insert operation will look like "<<str2<<endl;
    str2.insert(1,"eo");
    cout<<"The strinf after append operation will look like "<<str2<<endl;
    

    
}