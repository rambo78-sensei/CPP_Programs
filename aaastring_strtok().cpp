// "strtok()" functon helps us to tokenize the string

#include<iostream>
#include<cstring>

int main()
{
    char s1[50] = "x=10; y=20; z=35;";
    char *token = strtok(s1,"=;");

    while(token)! = NULL
    {
        cout<<token<<endl;
        token= strtoken(NULL,"=;");

    }

    return 0;
}