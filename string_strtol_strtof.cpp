/* The function "strtol(str1,NULL,number system)" helps us to convert the string into a number 
    The function "strtol(str1,NULL)" stands for string to long integer

    The function "strtof(str1,NULL)" helps to convert the string into a float number
    The function "strtof(str1,NULL)" stands for string to float
    NULL represents the end of the string */

    #include<iostream>
    #include<cstring>

    using namespace std;

    int main()
    {
        char s1[10] = "235";
        char s2[10] = " 54.78";

        cout<<s1<<endl;
        long int x = strtol(s1,NULL,10);// 10 gives us the number in the decimal form
        cout<<x<<endl;

        cout<<s2<<endl;
        float y = strtof(s2,NULL);
        cout<<y<<endl;

    }
