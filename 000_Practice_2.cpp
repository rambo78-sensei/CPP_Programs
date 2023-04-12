/*Given an array of elements, fins the pair of adjacent elements that has the largest product ans
return the product
*/
#include<iostream>
using namespace std;
int main()
{
    int a[] ={3,6,-2,-5,7,3};
    //int n;
    //int a[n]={};
    //cout<<"Enter the values inside the array according to your wish";
    //cin>>a[n]; 
    int prod=0;
    int gt_prod=0;
    for(int i=0; i<=4;i++)
    {
        prod=a[i]*a[i+1];
        if (prod>=gt_prod)
        {
            gt_prod=prod;
        }
    }

    cout<<gt_prod;
}