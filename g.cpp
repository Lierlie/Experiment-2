#include <iostream>

using namespace std;

int num = 0;
int sum =0;
int main()
{
    do{
        cout<<"Enter a number: ";
        cin>>num;
        
        if(num>0) {
            for(int i=1; i<num+1; i++){
                sum+=i;
            }
        
        cout<<"The sum of all whole number from 1 to " <<num <<" is " <<sum <<endl;
        sum = 0;
        }
    }while(num>0);
    
    return 0;
}
