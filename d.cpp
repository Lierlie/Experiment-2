#include <iostream>
using namespace std;

int main()
{    
    double num1, num2, num3;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    if(num1 >= num2 && num1 >= num3)
    {
        cout << "The largest of the three numbers is " << num1;
    }

    if(num2 >= num1 && num2 >= num3)
    {
        cout << "The largest of the three numbers is " << num2;
    }

    if(num3 >= num1 && num3 >= num2) {
        cout << "The largest of the three numbers is " << num3;
    }

    return 0;
}
