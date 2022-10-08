/* s.replace(<index number>,<how many alphabets to replace>,<"string to be added") function helps
 us to replace few letters in the string with the new word/letters
 s.erase() helps us to erase/delete/clear everything present inside the string*/

 #include<iostream>
 #include<string>

 using namespace std;

 int main()
 {
    string str = "How is you ";
    cout<<"The initial string before the replace function is "<<str<<endl;
    str.replace(4,2,"are");
    cout<<"The string after replace function is "<<str<<endl;

    cout<<"The string before the clear function is "<<str<<endl;
    str.clear();
    cout<<"The string after the clear function is "<<str<<"<contains nothing>"<<endl;
 }