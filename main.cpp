#include <iostream>
#include"Transport.h"
#include"Vessel.h"
#include"Auto.h"

int main()
{
	Transport* transport = new Vessel("Vessel", 9000, 100);
	transport->shippingCost(1450);
	transport = new Auto("Auto", 650, 8);
	transport->shippingCost(100);
	transport->setName("SET");
	transport->shippingCost(100);
	transport = new Vessel("Vessel", 9000, 100);
	transport->shippingCost(1450);
}
