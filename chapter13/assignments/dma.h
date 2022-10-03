#ifndef DMA_H_
#define DMA_H_

#include <iostream>

class abcDMA
{
	private:
		char * label;
		int rating;
	protected:
		const char * Label() const {return label;}
		int Rating() const {return rating;}
	public:
		abcDMA(const char *l = "null", int r = 0);
		abcDMA(const abcDMA & as);
		virtual ~abcDMA();
		virtual void View() const = 0;
		abcDMA & operator=(const abcDMA &as);
};

class baseDMA : public abcDMA
{
	public:
		baseDMA(const char *l = "null", int r = 0) : abcDMA(l, r) {}
		baseDMA(const baseDMA &rs) : abcDMA(rs) {}
		//virtual ~baseDMA();
		void View() const;
		baseDMA & operator=(const baseDMA &rs);
		//friend std::ostream & operator<<(std::ostream &os,
		//				 const baseDMA &rs);
};

class lacksDMA : public abcDMA
{
	private:
		enum {COL_LEN = 40};
		char color[COL_LEN];
	public:
		lacksDMA(const char *c = "blank", const char *l = "null",
			 int r = 0);
		lacksDMA(const char *c, const abcDMA &as);
		void View() const;
                //friend std::ostream & operator<<(std::ostream &os,
                //                                 const lacksDMA &ls);
};

class hasDMA : public abcDMA
{
	private:
		char *style;
	public:
		hasDMA(const char *s = "none", const char *l = "null",
                       int r = 0);
		hasDMA(const char *s, const abcDMA &as);
		hasDMA(const hasDMA &hs);
		~hasDMA();
		hasDMA & operator=(const hasDMA &hs);
		void View() const;
                //friend std::ostream & operator<<(std::ostream &os,
                //                                 const hasDMA &hs);
};

#endif
