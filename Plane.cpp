#include "Plane.h"

double Plane::calculateFuelConsumption(double additionalWeight) {
    if (weight <= 0)
        return consumption;

    return consumption * airResistance * (1 + additionalWeight / weight);
}
