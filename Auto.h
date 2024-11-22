#pragma once
#include "Transport.h"
class Auto :
    public Transport
{
private:
    static constexpr double frictionResistance = 0.7;
public:
    Auto(const std::string& name_, double weight_, double consumption_)
        : Transport(name_, weight_, consumption_) { }
    Auto() = default;
    double calculateFuelConsumption(double additionalWeight) override;
};