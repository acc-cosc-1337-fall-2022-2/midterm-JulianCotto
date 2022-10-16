#include <vector>

using std::vector;

const double
        tastyDiscs = 48.0,
        expectedSugar = 1.5,
        expectedButter = 1.0,
        expectedFlour = 2.75;

bool test_config();

vector<double> get_cookie_ingredients(int cookies);
