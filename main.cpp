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
	cout<<"\t\t\t\t SCIENTIFIC CALCULATOR."<<endl;
	io->HandleIO();
	
	cout <<"\n\nDo you want to perform another operation?"<<endl;
	cout<<"\n1.Yes\n"<<endl;
	cout<<"\n2.NO\n"<<endl;
	letter=getche();

	if(letter=='1')
	{
	
		io->HandleIO();
		
	}
	

else if(letter=='2')
	exit(0);

	
			  
	
}
