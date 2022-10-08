/* For accessing the class "string", we have to include the header file "(#include string)"
when we declare the variable of type class , we use the term "object"
 instead of calling it as variable 
 When we are using the class string we don't have to declare an array,
  it will automatically get created internally in the memory by default */
  
   
#include<iostream>
#include<string>

using namespace  std;

int main()
{
    string str1= "Hello";
    cout<<str1<<endl;

    string str2;
    cout<<"Enter a string "<<endl;
    getline(cin,str2);// Note that while using array character we use the format cin.getline(s,100)
    cout<<str2<<endl;// The format for getline in the string class
                    // is different from the array of character

}