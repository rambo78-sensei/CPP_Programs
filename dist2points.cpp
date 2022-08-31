#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float x1, x2, y1, y2;
    float dist;

    cout<<"Enter the values of co-ordinates of any two points";
    cin>>x1>>x2>>y1>>y2;
    dist= sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
     cout<<"The distance between the two points is"<<dist;
 return 0 ;
}