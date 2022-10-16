#include "question1.h"
#include <iostream>

using
    std::cout,
    std::cin;

int main()
{
    int ctrl = 1;
    double
        cTemp,
        fTemp;

    while(ctrl == 1)
    {
        cout << "\nPlease enter the temperature in Celsius\n";
        cin >> cTemp;
        fTemp = get_fahrenheit(cTemp);
        cout << cTemp << " Degrees Celsius = " << fTemp << " Degrees Fahrenheit\n";
        cout << "\nWould you like to convert another temperature?\n1- Yes\n0- No";
        cin >> ctrl;
    }

    cout << "\nThanks for running the program!\n";

    return 0;
}