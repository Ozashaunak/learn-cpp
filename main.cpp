#include"AbstractCalc.h"
#include"Factoryclass.h"
#include<conio.h>
#include<math.h>
int main()
{
	char key,key1,key2,key3;
	Factory *calfactory= new Factory();
	cout<<"\t\t\t\t SCIENTIFIC CALCULATOR."<<endl;
     cout<<"Select operation:"<<endl;
     cout<<"\t\t1.Trignometric Operations"<<endl;
      cout<<"\t\t2.Logarithmic Operations"<<endl;
      cout<<"\t\t3.Arithematic Operations"<<endl;
      key=getche();
      switch(key)
      {
      	case '1':
      		{
			  AbstractCalc *cal=calfactory->getop(TRIGNO);
      		
      		cout<<"Choose Operation:"<<endl;
      		cout<<"\t\t1.Sin"<<endl;
      		cout<<"\t\t2.Cos"<<endl;
      		cout<<"\t\t3.Tan"<<endl;
      		cout<<"\t\t4.Sinh"<<endl;
      		cout<<"\t\t5.Cosh"<<endl;
			cout<<"\t\t6.Tanh"<<endl;
			key1=getche();
				cal->getdata();
			switch(key1)
			{
				
				case '1':
						static_cast<Trignometric*>(cal)->Sin();
						break;
				case '2':
						static_cast<Trignometric*>(cal)->Cos();
						break;
				case '3':
						static_cast<Trignometric*>(cal)->Tan();
						break;
				case'4':
						static_cast<Trignometric*>(cal)->SinH();
						break;
				case'5':
						static_cast<Trignometric*>(cal)->CosH();
						break;
				case '6':
						static_cast<Trignometric*>(cal)->TanH();
						break;
			}
			
			break;
		}
      			
      			case'2':
      				{
					  
      				
      		        AbstractCalc *cal=calfactory->getop(LOG);
      		        cout<<"Choose Operation:"<<endl;
      		cout<<"\t\t1.natural log"<<endl;
      		cout<<"\t\t2.Base 10 Log"<<endl;
      		key2= getche();
      		cal->getdata();
      		switch(key2)
      		{
			  
      		case'1':
      			{
				static_cast<Logarithmic*>(cal)->Log();
      			break;
      		}
      		case'2':
      			{
				  
      			static_cast<Logarithmic*>(cal)->LogTen();
      			break;
      		}
      	}
      	break;
      		}
      		case'3':
      			{
				  
      			AbstractCalc *cal=calfactory->getop(GEN);
      			cout<<"Choose Operation:"<<endl;
      			cout<<"\t\t1.Addition"<<endl;
      		cout<<"\t\t2.subtraction"<<endl;
      		cout<<"\t\t3.Multiplication"<<endl;
      		cout<<"\t\t4.Division"<<endl;
      		key3=getche();
      		cal->getdata();
      		switch(key3)
      		{
      			case '1':
						static_cast<GeneralCal*>(cal)->cAdd();
						break;
				case '2':
						static_cast<GeneralCal*>(cal)->cSub();
						break;
				case '3':
						static_cast<GeneralCal*>(cal)->cMult();
						break;
				case'4':
						static_cast<GeneralCal*>(cal)->cDiv();
						break;
			  }
      		
      	}
	

	}
	
}