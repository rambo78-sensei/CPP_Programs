/* The function "strstr" is used to extract s substring from the main string
    If the substring is found in the main string, then the function will give the 
    substing follwed by characters present in the main string after the sub string 
    
    The function "strchar" is used to extract character from the main string
    If the character is found in the main string, then the function will give the 
    substing follwed by characters present in the main string after the sub string

    "strrchar" is used for extracting the characters from backward direction
    
    WATCH SYNTAX CAREFULLY. IT'S BIT DIFFERENT FOR BOTH THE STR AND CHR CASES
    */

   #include<iostream>
   #include<cstring>

   using namespace std;

   int main()
   {
    char s1[100]= "Programming";
    char s2[100]= "gram";
    char s5 = 'g';
    cout<<strstr(s1,"gram")<<endl;

    char s3[100]= "Dinning";
    char s4[100]= {'n'};
    cout<<strchr(s3,'n')<<endl;
    cout<<strchr(s3,s5);
    cout<<strrchr(s3,'n');
    // NOTE THAT IT IS NECESSAARY TO NOT USE AN ARRAY AND ONLY USE A CHARACTER IN STRCHR FUNCTION




   }


 