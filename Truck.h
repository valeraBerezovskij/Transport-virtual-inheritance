#pragma once
#include "Transport.h"
class Truck :
    public Transport
{
private:
    static constexpr double frictionResistance = 0.3;
public:
    Truck(const std::string& name_, double weight_, double consumption_)
        : Transport(name_, weight_, consumption_) { }
    Truck() = default;
    double calculateFuelConsumption(double additionalWeight) override;
};

