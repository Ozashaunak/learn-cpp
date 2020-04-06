#include<iostream>
#include<math.h>
#include<conio.h>
#include"AbstractCalc.h"
#include"Factoryclass.h"
using namespace std;
AbstractCalc *Factory::getop(op_type type)
{
	AbstractCalc *cal=NULL;
	switch(type)
			{
				case TRIGNO:
					cal=new Trignometric();
					break;
				case LOG:
					cal= new Logarithmic();
					break;
				case GEN:
					cal=new GeneralCal();
				default:
					cal=NULL;
					break;
			}
			return cal;
	}
	


