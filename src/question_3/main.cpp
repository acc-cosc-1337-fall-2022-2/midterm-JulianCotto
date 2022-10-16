#include "question3.h"
#include <iostream>

using
    std::cout,
    std::cin;

int main()
{
    int
        num1,
        num2,
        gcd1,
        ctrl = 1;

    cout << "\nWelcome to the GCD Program\n";
    while(ctrl == 1)
    {
        cout << "\nEnter the 1st number (numerator)\n";
        cin >> num1;
        if(num1 < 0 || num1 > 200)
        {
            cout << "\nEntered Number must between 0 and 200\n";
            cout << "Setting 1st number to 100\n";
            num1 = 100;
        }

        cout << "\nEnter the 2nd number (denominator)\n";
        cin >> num2;
        if(num2 < 0 || num2 > 200)
        {
            cout << "\nEntered Number must between 0 and 200\n";
            cout << "Setting 2nd number to 50\n";
            num1 = 50;
        }

        gcd1 = gcd(num1, num2);
        cout << "\nThe Greatest Common Divisor of " << num1 << " and " << num2 << " is " << gcd1 << '\n';

        cout << "\nWould you like to run the program again?\n1- Yes\n0- No\n";
        cin >> ctrl;
    }

    cout << "\nThank you for running the Program!\n\nGoodBye!\n";

    return 0;
}