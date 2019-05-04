#include <iostream>
#include <stdlib.h> 
#include <cmath>
#include <iomanip>

using namespace std;

const double Z = 2.5;
int x = 0;
int y = 0;
double v = 0;
int main()
{
   cout<<"Please enter the value of x: ";
   cin>>x;
   cout<<"Please enter the value of y: ";
   cin>>y;
   
   switch(x){
       case 1: {
                 if(y>1 || y<5){
                     v=x*y*Z;
                 }else if(y>5) {
                     v=x + (y/Z);
                 }
                 break;
               }
       case 2: {
                 if(y<=5){
                     v=abs((x-y)/Z);
                 }else {
                     v=x*sqrt(y+Z);
                 }
                 break;
                }
       default: v=x+y+Z;
                break;
                
   }
   

    cout <<setw(10) <<"V=" << fixed << setprecision(2) << v;
   
    
    return 0;
}
