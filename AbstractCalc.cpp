#include<iostream>
#include "AbstractCalc.h"
#include<math.h>
using namespace std;
void GeneralCal::getdata()
{
	cout<<"Enter the first number:"<<endl;
	cout<<"Enter the second number:"<<endl;
	cin>>a;
	cin>>b;
}
void GeneralCal::cAdd()
{
	cout<<a+b;
}
void GeneralCal::cSub()
{
	cout<<a-b;
}
void GeneralCal::cMult()
{
	cout<<a*b;
}
void GeneralCal::cDiv()
{
	cout<<a/b;
}
void Trignometric::getdata()
{
	cout<<"Give Input:"<<endl;
	cin>>a;
}
void Trignometric::Sin()
{
	cout<<sin(a);
}
void Trignometric::Cos()
{
	cout<<cos(a);
}
void Trignometric::Tan()
{
	cout<<tan(a);
}
void Trignometric::SinH()
{
	cout<<sinh(a);
}
void Trignometric::CosH()
{
	cout<<cosh(a);
}
void Trignometric::TanH()
{
	cout<<tanh(a);
}

void Logarithmic::getdata()
{
	cout<<"Give Input"<<endl;
	cin>>a;
}
void Logarithmic::Log()
{
	cout<<log(a);

}
void Logarithmic::LogTen()
{
	cout<<log10(a);
}

