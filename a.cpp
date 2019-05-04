#include <iostream>

using namespace std;

int choice = 0;
int hours = 0;
int main()
{
    cout<<"Please enter the number of the internet service you are subscribed to." <<endl;
    cout<<"(1) Package A" <<endl <<"(2) Package B" <<endl <<"(3) Package C" <<endl;
    cin>>choice;
    
    if(choice<=0 || choice>3){
        cout<<"Invalid Input";
    }else{
        cout<<"Please enter the total number of hours you've been using the internet: ";
        cin>>hours;
        if(choice==1){
            if(hours>10) {
                hours-=10;
            }else {
                hours = 0;
            }
            cout<<"Your internet bill for PackageA this month is P" <<995+(hours*20);
        }else if(choice==2){
            if(hours>20) {
                hours-=20;
            }else {
                hours = 0;
            }
            cout<<"Your internet bill for PackageB this month is P" <<1495+(hours*10);
        }else{
            cout<<"Your internet bill for PackageC this month is P1995";
        }
    }
    
    return 0;
}

