#include "Auto.h"

double Auto::calculateFuelConsumption(double additionalWeight) {
    if (weight <= 0)
        return consumption;

    return consumption * frictionResistance * (1 + additionalWeight / weight);
}
