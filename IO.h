#ifndef IO_H
#define IO_H
#include"AbstractCalc.h"
#include"Factoryclass.h"
class IO
{
public:
	char key,key1,key2,key3;
	Factory *calfactory= new Factory();
	public:
		void HandleIO();
};
#endif
