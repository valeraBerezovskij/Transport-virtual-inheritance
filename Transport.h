#pragma once
#include<iostream>

class Transport
{
protected:
	std::string   name;
	double        weight;
	double        consumption;

public:
	Transport(const std::string& name_, double weight_, double consumption_)
		: name(name_), weight(weight_), consumption(consumption_) { }

	Transport()          = default;
	virtual ~Transport() = default;
	/* 
		��� ��� ���� ��������� ����� ��� �������, �� ��� ������ ��������������
		����� ��� ������
	*/
		
	virtual double calculateFuelConsumption(double additionalWeight);
	void           shippingCost(double distance, double additionalWeight = 0);

	void setName        (const std::string& name)  { this->name = name; }
	void setWeight      (const double weight)      { this->weight = weight; }
	void setConsumption (const double consumption) { this->consumption = consumption; }

	std::string getName()        { return name; }
	double      getWeight()      { return weight; }
	double      getConsumption() { return consumption; }
};
