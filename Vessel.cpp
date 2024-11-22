#include "Vessel.h"

double Vessel::calculateFuelConsumption(double additionalWeight) {
    if (weight <= 0)
        return consumption;

    return consumption * waterResistance * (1 + additionalWeight / weight);
}