#ifndef FACTORY_CLASS
#define FACTORY_CLASS
#include<iostream>
#include "AbstractCalc.h"
enum op_type{TRIGNO,LOG,GEN,INVALID};
class Factory
{
  public:
  AbstractCalc *getop(op_type type);
};
#endif

