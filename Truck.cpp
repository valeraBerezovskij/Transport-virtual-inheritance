#include "Truck.h"

double Truck::calculateFuelConsumption(double additionalWeight) {
    if (weight <= 0)
        return consumption;

    return consumption * frictionResistance * (1 + additionalWeight / weight);
}
