//
#include "question4.h"

bool test_config()
{
    return true;
}

double get_kinetic_energy(double mass, double velocity)
{
    double kEnergy;

    kEnergy = .5 * mass * (velocity * velocity);

    return kEnergy;
}