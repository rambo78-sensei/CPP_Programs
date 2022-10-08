/* "strcmp(str1,str2)" functionn helps us to compare the strings in dictioinary order or alphabetical 
    order
    eg in case of "apple " and "banana" , the first alphabet of the word apple is "a"
    and that of banana is "b". Since a comes before b in dictionary, the word apple is smaller

    The result obtained from the strcmp(str1,str2) is 

    Case 1 ---if "str1 < str2" -->Negative result
    Case 2 ---if "str1 > str2" --> Posstive result
    Case 3----if "str1 = str2" --> 0 value
    */

   #include<iostream>
   #include<cstring>

   using namespace std;

   int main()
   {
    //Case 1 The AScii value of h is greater than H
    char s1[20] = "Hell0";
    char s2[20] = "hello";
    cout<<strcmp(s1,s2)<<endl;

    // Case 2 
    char s3[20] = "zoo";
    char s4[20] = "app";
    cout<<strcmp(s3,s4)<<endl;
    

    // Case 3
    char s5[20] = "hello";
    char s6[20] = "hello";
    cout<<strcmp(s5,s6)<<endl;

    return 0;

   }

