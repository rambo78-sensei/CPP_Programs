#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float base_salary, allowance, deduction, net_salary;
    cout<<"Enter the Base Salary, percentage of allowance on Base Salary, percentage of deductions on base salary respectively"<<endl;
    cin>>base_salary>>allowance>>deduction;

    net_salary= base_salary + allowance*base_salary - deduction*base_salary;

    cout<<"The in-hand net salary of the employee is "<<net_salary;

    return 0;
}