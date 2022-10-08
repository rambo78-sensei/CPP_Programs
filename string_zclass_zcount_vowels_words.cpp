/* PROBLEM STATEMENT YOU ARE GIVEN A STRING 
    YOU ARE SUPPOSED TO FIND THE NUMBER OF THE VOWELS, WORDS AND CONSONANTS FROM THE GIVEN STRING
    Logic for words number of spaces -1;
    */

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str = "how Many    wOrds";
    int vowels=0;
    int space=0;
    int words=0;
    int consonants=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if (str[i]==' ')
        {
           space++;
        }
        
       
        else if(str[i]==65||str[i]==69||str[i]==73||str[i]==79||str[i]==85||str[i]==97||
                str[i]==101||str[i]==105||str[i]==111||str[i]==117)
        // we can even write 'str[i]==a'||str[i]=='A'||str[i]=='e'||str[i]=='E'......
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
            
    }
    words=space+1;
    cout<<"The number of words in the String is "<<words<<endl;
    cout<<"The number of  vowels in the string is "<<vowels<<endl;
    cout<<"The number of consonants in the string is "<<consonants<<endl;

}
