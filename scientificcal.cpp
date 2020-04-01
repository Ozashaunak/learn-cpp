#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
class Calc
{
	public:
		virtual float getdata()=0;
		
};
class GenCal: public Calc
{
protected:
	float a,b;
public: float getdata(){

	cout<<"Enter the numbers:";
	cin>>a;
	cin>>b;
}
	float cAdd()
		{
			cout<< a+b;
		}
		float cSub()
		{
			cout<< a-b;
		}
		float cMult()
		{
			cout<< a*b;
		}
		float cDiv()
		{
			cout<< a/b;
		}
};
class ScCal:public Calc
{
	protected:
		float x;
		public:
			float getdata()
			{   cout<<"Enter the data:"<<endl;
				cin>>x;
			}
};
class Trigno: public ScCal
{
	public:
		float x;
		float getdata()
			{   cout<<"Enter the data:"<<endl;
				cin>>x;
			}
		
		float Sin()
		{
			cout<<sin(x);
		}
		float Cos()
		{
			cout<<cos(x);
		}
		float Tan()
		{
			cout<<tan(x);
		}
		
		
};
int main()
{ char key;
char key1;
 char key2;
 
	cout<<"\n\n\nCALCULATOR\n\n\n";
cout<<"\t 1 : Arithmetic Operations \n";
 cout<<"\t 2 : Trigonometric Functions \n";
 key = getche();
 switch(key)
 { case '1':
 	{
 	{
	 cout<<"\n\n";
	 cout<<"\t1 : Addition:\n";
	 cout<<"\t2 : Subtraction:\n";
	 cout<<"\t3 : Multiplication:\n";
	 cout<<"\t4 : Division:\n";
	 key1=getche();
	 switch(key1)
	 {
	 	case'1':
	 		{ GenCal g1;
	 		g1.getdata();
	 	g1.cAdd();
	 	break;
			 }
	 }
 	
		 }	
	 }break;
 	case '2':
 		{ Trigno t1;
          cout<<"\n\n";
    cout<<"\t1 : Sin function \n";
          cout<<"\t2 : Cos function \n";
          cout<<"\t3 : Tan function \n";
    key2=getche();
    switch(key2)
    {
    	case'1':
    		
    		t1.getdata();
    		t1.Sin();
    	break;	
    	case'2' :
    		t1.getdata();
    		t1.Cos();
    		break;
    	case'3' :
    		t1.getdata();
    		t1.Tan();
    		break;
    		
}
}
}
}
