#include "kenny_yu_FuelGauge.h"
#include <iostream>
#include <string>
using namespace std;

// (9) The constructor uses an in-class initializer to initialize gallons to the argument passed through g in the function call.
FuelGauge::FuelGauge(int g)
	: gallons{ g } {};
int FuelGauge::getGallons() const {
	return gallons;
}
void FuelGauge::incGallons() {
	if (getGallons() < 15) {
		gallons++;
	}
}

// (10) The gallons will be continuously decreased by one until there are 0 (no more) gallons left in the car.
void FuelGauge::decGallons() {
	if (getGallons() > 0) {
		gallons--;
	}
}