#include "question2.h"

bool test_config()
{
    return true;
}

vector<double> get_cookie_ingredients(int cookies)
{
    vector<double> expCookies;
    double
        expSugar,
        expButter,
        expFlour;

    if(cookies == 48)
    {
        expCookies.push_back(tastyDiscs);
        expCookies.push_back(expectedSugar);
        expCookies.push_back(expectedButter);
        expCookies.push_back(expectedFlour);
    }
    else {
        expSugar = (cookies * expectedSugar) / tastyDiscs;
        expButter = (cookies * expectedButter) / tastyDiscs;
        expFlour = (cookies * expectedFlour) / tastyDiscs;

        expCookies.push_back(cookies);
        expCookies.push_back(expSugar);
        expCookies.push_back(expButter);
        expCookies.push_back(expFlour);
    }

    return expCookies;
}