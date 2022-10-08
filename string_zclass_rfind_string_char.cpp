/*s.rfind(str) or s.rfind(char) funtion help us to find the character from the behind
        ie(form right to left order instead of usual right to left order )
        eg: When same character is present at the two locations then the letter which appears first
        whien searcing from the behind is considered
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str1 = "How are you ppl";
    string str2 = "are";
    char chr = 'o';

    cout<<"The main string is "<<str1<<" and the char to be found is  "<<chr<<endl;
    cout<<"The character is found from reverse at "<<str1.rfind(chr)<<endl;
    cout<<"The character is found from reverse at "<<str1.rfind('o')<<endl;

    cout<<"the main string is "<<str1<<" and the substring to be found is  "<<str2<<endl;
    cout<<"The substring is found from reverse at "<<str1.rfind(str2)<<endl;
    cout<<"The substring is found from reverse at "<<str1.rfind("are")<<endl;
    

     
}