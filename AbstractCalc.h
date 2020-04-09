#ifndef CALC
#define CALC
class AbstractCalc
{
	public: 
	virtual void getdata()=0;
};
class GeneralCal:public AbstractCalc
{
   public:
   float a,b;
   public:
		void getdata();
		void cAdd();
		void cSub();
		void cMult();
		void cDiv();
};

class Trignometric: public AbstractCalc
{
	protected:
	float a;
	public:
		void getdata();
		void Sin();
		void Cos();
		void Tan();
		void SinH();
		void CosH();
		void TanH();
};

class Logarithmic:public AbstractCalc
{
	protected:
	float a;
	public:
		void getdata();
		void Log();
		void LogTen();
};
#endif
