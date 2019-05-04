#include <iostream>

using namespace std;

int num1 = 0;
int tempNum = 0;
int fibonacci = 1;
int main()
{
    cout<<num1 <<",";
    cout<<num1+1;
    
    for(int i=0; i<20; i++){
        tempNum = num1;
        num1=fibonacci;
        fibonacci = tempNum + fibonacci;
        cout<<"," <<fibonacci;
    }
    
    return 0;
}

