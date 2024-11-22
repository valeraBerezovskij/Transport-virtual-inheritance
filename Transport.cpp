#include "Transport.h"



double Transport::calculateFuelConsumption(double additionalWeight) {
    if (weight <= 0)
        return consumption;

    std::cout << "Transport::calculateFuelConsumption()\n";
    return consumption * (1 + additionalWeight / weight);
}

void Transport::shippingCost(double distance, double additionalWeight) {
    double used = calculateFuelConsumption(additionalWeight) * distance / 100;
    std::cout << "Transport: " << name << "\n";
    std::cout << "Fuel Consumption: " << used << " liters for " << distance << " km\n";
}
