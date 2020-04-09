// @<COPYRIGHT_START>@
// ===============================================
// Copyright 2020- Shaunak Oza
// This Calculator project was done as intern assignment.
// ===============================================
/*==================================================================================================
File description for main.cpp:
This file handles the main operations for user.
=================================================================================================*/
#include"AbstractCalc.h"
#include"Factoryclass.h"
#include"IO.h"
#include<conio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{ 
char letter;
    IO *io=new IO;
    cout<<"//Calculator Program Version 01-Shaunak Oza"<<endl;
	cout<<"\n\n\t\t\t\t SCIENTIFIC CALCULATOR."<<endl;
	io->HandleIO();
	do
	{
	cout <<"\n\nDo you want to perform another operation?"<<endl;
	cout<<"\n1.Yes\n"<<endl;
	cout<<"2.No"<<endl;
	letter=getche();
	io->HandleIO();
	}

	while(letter=='1');
}

	


	
			  
	

