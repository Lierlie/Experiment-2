#include <iostream>

using namespace std;

int bill = 0;
int addFee = 0;
int lastMonth = 0;
int thisMonth = 0;
int main()
{
    cout<<"Enter the unpaid amount of water (in gallons) the customer has consumed last month: ";
    cin>>lastMonth;
    cout<<"Enter the amount of water (in gallons) the customer has consumed this month: ";
    cin>>thisMonth;
    
    if(lastMonth>0){
        addFee = 20;
    }
    
    bill=(lastMonth*1.10)+(thisMonth*1.10) + 35 + addFee;
    
    cout<<"The customer's total water bill is P" << bill;
    
    return 0;
}

