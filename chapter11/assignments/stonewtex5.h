#ifndef STONEWTEX5_H_
#define STONEWTEX5_H_

class Stonewt
{
	public:
		enum Mode {STN, PDINT, PDFT};
	private:
		static const int Lbs_per_stn = 14;
		int stone;
		double pds_left;
		double pounds;
		Mode mode;
	public:
		Stonewt(double lbs, Mode form = PDFT);
		Stonewt(int stn, double lbs, Mode form = STN);
		Stonewt(Mode form = PDFT);
		~Stonewt();
		void stn_mode() {mode = STN;}
		void pdint_mode() {mode = PDINT;}
		void pdft_mode() {mode = PDFT;}
		Stonewt operator+(const Stonewt &stn) const;
		Stonewt operator-(const Stonewt &stn) const;
		Stonewt operator*(double n) const;
		friend Stonewt operator*(double n, const Stonewt &stn) {return stn * n;}
		friend std::ostream & operator<<(std::ostream &os, const Stonewt &stn);
};


#endif
