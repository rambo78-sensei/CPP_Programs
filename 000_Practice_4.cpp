/* Using the bubble sort, sort all the elements given in the list */ 
#include<iostream>
#include<string>

using namespace std;

int main()
{   
    int temp = 0;
    int a[]={2,4,3,1,8,5,9};
    for(int i =0; i<=7; i++)
    {
        for(int j=i+1; j<=7; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int k=0; k<=7;k++)
    {
        cout<<a[k]<<endl;
    }
}