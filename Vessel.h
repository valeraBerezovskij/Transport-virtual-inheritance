#pragma once
#include "Transport.h"

class Vessel :
    public Transport
{
private:
    /* 
        Было бы умнее сделать одну переменную resistance в базовом классе,
        но это просто чтобы формулы не выдумывать
    */
    static constexpr double waterResistance = 0.45;
public:
    /*
        В констурктор передается расход на 100 км, стандартный, а
        в shippingCost считается на конкретное расстояние с учетом
        стандартного расхода.
    */
    Vessel(const std::string& name_, double weight_, double consumption_)
        : Transport(name_, weight_, consumption_) { }

    Vessel() = default;

    double calculateFuelConsumption(double additionalWeight) override;
};

