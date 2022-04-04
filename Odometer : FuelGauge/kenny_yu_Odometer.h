#ifndef KENNY_YU_ODOMETER_H
#define KENNY_YU_ODOMETER_H
#include "kenny_yu_FuelGauge.h"
class Odometer {
public:
	Odometer(FuelGauge* pFuel, int miles);
	int getMileage() const;
	void incMileage();
private:
	FuelGauge* fuelGauge;
	int mileage;
};
#endif