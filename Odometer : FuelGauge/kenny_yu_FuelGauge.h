#ifndef KENNY_YU_FUELGAUGE_H
#define KENNY_YU_FUELGAUGE_H
class FuelGauge {
public:
	explicit FuelGauge(int g);
	int getGallons() const;
	void incGallons();
	void decGallons();

private:
	int gallons;

};
#endif
