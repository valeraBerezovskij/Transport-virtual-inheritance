#pragma once
#include "Transport.h"
class Plane :
    public Transport
{
private:
    static constexpr double airResistance = 0.856;
public:
    Plane(const std::string& name_, double weight_, double consumption_)
        : Transport(name_, weight_, consumption_) { }
    Plane() = default;
    double calculateFuelConsumption(double additionalWeight) override;
};

