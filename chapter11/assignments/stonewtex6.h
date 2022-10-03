#ifndef STONEWTEX6_H_
#define STONEWTEX6_H_

class Stonewt
{
	private:
		static const int Lbs_per_stn = 14;
		int stone;
		double pds_left;
		double pounds;
	public:
		Stonewt(double lbs);
		Stonewt(int stn, double lbs);
		Stonewt();
		~Stonewt();
		void show_lbs() const;
		void show_stn() const;
		bool operator>(const Stonewt &stn) const;
		bool operator<(const Stonewt &stn) const;
		bool operator>=(const Stonewt &stn) const;
		bool operator<=(const Stonewt &stn) const;
		bool operator==(const Stonewt &stn) const;
		bool operator!=(const Stonewt &stn) const;
};


#endif
