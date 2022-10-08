//strlen() function is used to find out the length of the string 

#include<iostream>
#include<cstring>

using namespace std;
int  main()
{
     // declaring the string using the array 
     char a[50]="Hello world";
     cout<<"The length of the string is "<<strlen(a)<<endl;

     // declaring the string using the pointer
     char x;
     char *p=&x;
     cout<<"Enter the string";
     cin.getline(p,100);
     cout<<strlen(p);

}