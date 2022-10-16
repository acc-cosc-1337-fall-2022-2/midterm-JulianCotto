#include "question2.h"
#include <iostream>
#include <vector>
#include <string>

using
    std::cout,
    std::cin,
    std::vector,
    std::string;

int main()
{
    int
        ctrl = 1,
        dec,
        cook;
    vector<double> cookies;
    vector<string> ingred = {" Cookies\n",
                             " Cup/s of Sugar\n",
                             " Cup/s of Butter\n",
                             " Cup/s of Flour\n"};

    cout << "\nWelcome to the Cookie Recipe Program\n";

    while(true)
    {
        cout << "\nPlease enter number of cookies to receive your ingredients list\n";
        cin >> cook;
        cout << '\n';
        cookies = get_cookie_ingredients(cook);
        for(int i = 0; i <= 3; i++)
        {
            cout << cookies[i] << ingred[i];
            if(i == 0)
            {
                cout << "----------\n";
            }
        }
        cout << "\nWould you like to run the program again?\n1- Yes\n0- No\n";
        cin >> dec;
        if(dec == 1)
        {
            ctrl = 1;
        }
        else if(dec == 0)
        {
            cout << "\nThank you for running the Program!\n";
            break;
        }
        else
        {
            cout << "\nInvalid Input. 1- Continue & 0- Exit\n";
        }
    }

    cout << "\nGoodbye!\n";


    return 0;
}