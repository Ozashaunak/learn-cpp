// @<COPYRIGHT_START>@
// ===============================================
// Copyright 2020- Shaunak Oza
// This Calculator project was done as intern assignment.
// ===============================================
/*==================================================================================================
File description for Factory.cpp:
This file handles users Factory class.Factory pattern is used to create instances for different classes.
=================================================================================================*/

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
			break;
	    }
	return cal;
}
	
