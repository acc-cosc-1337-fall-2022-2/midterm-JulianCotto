#include <iostream>
#include "question4.h"

using
    std::cout,
    std::cin;

int main()
{
    int
        ctrl = 1,
        dec;
    double
        mass,
        velocity,
        ke;

    cout << "\nWelcome to the Physics Program!\n";

    while(ctrl == 1)
    {
        cout << "\nPlease enter weight of object in kilograms\n";
        cin >> mass;
        cout << "\nPlease enter velocity of object in meters per second\n";
        cin >> velocity;
        ke = get_kinetic_energy(mass, velocity);
        cout << "\nThe Objects Kinetic Energy is " << ke << " joules\n";

        cout << "\nWould you like to run the program again?\n1- Yes\n0- No\n";
        cin >> dec;
        if (dec == 1) {
            ctrl = 1;
        } else if (dec == 0) {
            cout << "\nThank you for running the Program!\n";
            break;
        } else {
            cout << "\nInvalid Input. 1- Continue & 0- Exit\n";
        }
    }
    return 0;
}