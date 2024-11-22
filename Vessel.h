#pragma once
#include "Transport.h"

class Vessel :
    public Transport
{
private:
    /* 
        ���� �� ����� ������� ���� ���������� resistance � ������� ������,
        �� ��� ������ ����� ������� �� ����������
    */
    static constexpr double waterResistance = 0.45;
public:
    /*
        � ����������� ���������� ������ �� 100 ��, �����������, �
        � shippingCost ��������� �� ���������� ���������� � ������
        ������������ �������.
    */
    Vessel(const std::string& name_, double weight_, double consumption_)
        : Transport(name_, weight_, consumption_) { }

    Vessel() = default;

    double calculateFuelConsumption(double additionalWeight) override;
};

