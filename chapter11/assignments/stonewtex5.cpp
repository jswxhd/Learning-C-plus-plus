#include <iostream>
#include "stonewtex5.h"

using std::cout;

Stonewt::Stonewt(double lbs, Mode form)
{
	stone = int (lbs) / Lbs_per_stn;
	pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
	mode = form;
}

Stonewt::Stonewt(int stn, double lbs, Mode form)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	mode = form;
}

Stonewt::Stonewt(Mode form)
{
	stone = pounds = pds_left = 0;
	mode = form;
}

Stonewt::~Stonewt()
{
}

Stonewt Stonewt::operator+(const Stonewt &stn) const
{
	double tot = pounds + stn.pounds;
	return Stonewt(tot);
}

Stonewt Stonewt::operator-(const Stonewt &stn) const
{
	double diff = pounds - stn.pounds;
	return Stonewt(diff);
}

Stonewt Stonewt::operator*(double n) const
{
	double tot = pounds * n;
	return Stonewt(tot);
}

std::ostream & operator<<(std::ostream &os, const Stonewt &stn)
{
	if(stn.mode == Stonewt::STN)
		cout << stn.stone << " stone, " << stn.pds_left << " pounds\n";
	else if(stn.mode == Stonewt::PDFT)
		cout << stn.pounds << " pounds\n";
	else
		cout << int(stn.pounds) << " pounds\n";

}

