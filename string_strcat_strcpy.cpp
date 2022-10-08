/* strcpy(destination, source) helps us to copy the contents from 
the source string to destination  string

strncpy(destination, source, number) helps us to copy the contents from 
the source string to destination  string. The number signifies the number of the letters 
which needs to be copied from the source string to deestination string

strcat(destination, source ) helps us to store the contents of destination string and source string
combined in the destination string

strncat(destination, source, number): number signifies the number of letters from source string 
which needs to be combined

*/


#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char s1[100]= "Good ";
    char s2[100]= "Morning";
    cout<<strcat(s1,s2)<<endl;
    cout<<strncat(s1,s2,6)<<endl;

    char str1[]="Hello Geeks!";
    char str2[] = "GeeksforGeeks";
    char str3[40];
    char str4[40];
    char str5[] = "GfG";
     
    strcpy(str2, str1);
    strcpy(str3, "Copy successful");
    strcpy(str4, str5);
    cout << "str1: " << str1 << "\nstr2: " << str2 <<"\nstr3: "<< str3 << "\nstr4: "<< str4;
    return 0;



}



