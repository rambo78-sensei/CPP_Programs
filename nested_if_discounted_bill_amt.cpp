/*Calculate Discounted Bill Amount
function Discount(float amount)
if amount>=5000 offer 20% discount
if 2000<=amount<5000 offer 10% discount
if amount<2000 offer 5% discount
output:  print discounted amount ie. bill amount after discount*/

#include<iostream>
using namespace std;

int main()
{

    float disamt, billamt;
    cout<<" Enter the total Bill amount"<<endl;
    cin>>billamt;

    if(billamt>=5000)
    {
        disamt=billamt - 0.2*billamt;
        cout<<"The total bill is "<<disamt<<endl;
    
    }
    else if(billamt>=2000 && billamt<5000)
    {
        disamt = billamt - 0.1*billamt;
        cout<<"The total bill is "<<disamt<<endl;
    }
    else
        disamt= billamt - 0.05*billamt;
        cout<<"The total bill is "<<disamt<<endl;
        

}

