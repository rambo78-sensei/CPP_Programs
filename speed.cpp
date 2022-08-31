#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float v,u,a,speed;
    cout<<"Enter the final velocity, initial velocity & acceleration respectively";
    cin>>v>>u>>a;
    speed=(v*v-u*u)/(2*a);
    cout<<"The value of speed is "<<speed;

    return 0;
}
