using namespace std;
void GeneralCal::getdata()
{
	cout<<"\nEnter the first number:"<<endl;
	cin>>a;
	cout<<"Enter the second number:"<<endl;
    cin>>b;
}
void GeneralCal::cAdd()
{
	cout<<"\nAddition of two numbers ="<<endl;
	cout<<a+b;
}
void GeneralCal::cSub()
{
	cout<<"\nSubtraction of two numbers ="<<endl;
	cout<<a-b;
}
void GeneralCal::cMult()
{
	cout<<"\nMultiplication of two numbers ="<<endl;
	cout<<a*b;
}
void GeneralCal::cDiv()
{
	cout<<"\nDivision of two numbers ="<<endl;
	cout<<a/b;
}
void Trignometric::getdata()
{
	cout<<"\nGive Input:"<<endl;
	cin>>a;
}
void Trignometric::Sin()
{
	cout<<"\n Sine value of"<<a<<"="<<endl;
	cout<<sin(a);
}
void Trignometric::Cos()
{
	cout<<"\n Cos value of"<<a<<"="<<endl;
	cout<<cos(a);
}
void Trignometric::Tan()
{
	cout<<"\n Tan value of"<<a<<"="<<endl;
	cout<<tan(a);
}
void Trignometric::SinH()
{
	cout<<"\n Hyperebolic Sine value of"<<a<<"="<<endl;
	cout<<sinh(a);
}
void Trignometric::CosH()
{
	cout<<"\n Hyperbolic CoSine value of"<<a<<"="<<endl;
	cout<<cosh(a);
}
void Trignometric::TanH()
{
	cout<<"\n Hyperbolic Tan value of"<<a<<"="<<endl;
	cout<<tanh(a);
}

void Logarithmic::getdata()
{
	
	cout<<"\nGive Input"<<endl;
	cin>>a;
}
void Logarithmic::Log()
{
	cout<<"\nNatural Log value of "<<a<<"="<<endl;
	cout<<log(a);

}
void Logarithmic::LogTen()
{
	cout<<"\nLog to basee 10 value of "<<a<<"="<<endl;
	cout<<log10(a);
}

