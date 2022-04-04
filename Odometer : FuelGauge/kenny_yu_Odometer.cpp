#include "kenny_yu_Odometer.h"
#include <iostream>
using namespace std;

// (1) Odometer constructor has pointer pFuel which points to FuelGauge as well as a miles parameter of type int which is used to
//     initialize mileage to the argument that's passed second to the function call.
Odometer::Odometer(FuelGauge* pFuel, int miles) {
	fuelGauge = pFuel;
	mileage = miles;
}

// (2) getMileage function returns the mileage to get the car's current mileage which is at first, set to 0.
int Odometer::getMileage() const {
	return mileage;
}

// (3) the incMileage function increments the current mileage by 1. The upper bound mileage is
//     999,999 at the maximum, and whenever the mileage exceeds this integer, the odometer resets
//     the mileage to 0.
void Odometer::incMileage() {
	if (getMileage() <= 999999) {
		mileage++;
	}
	else {
		mileage = 0;
	}
	// (4) The FuelGauage object's fuel is decreased by 1 gallon which is called in the if statement every time 
	//     24 miles has been traveled.
	if (getMileage() % 24 == 0)

		// (5) The Odometer class works with the FuelGauge class through the private pointer fuelGauge of type
		//     FuelGauge in order to dereference and access the decGallons() function in class FuelGauge.
		fuelGauge->decGallons();
}
