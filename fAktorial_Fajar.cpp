/*
*	NIM			:	16.111.195
*	Nama		:	Fajar Winata
*	Kelas		:	16C RM TIF
*	Jurusan		: 	Teknik Informatika
*	Judul		:	Program Faktorial (!)
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int fak(int x);	

int main()
{
	int x;
    
   cout<<"PROGRAM PENENTU NILAI FAKTORIAL"<<endl;
   cout<<"BILANGAN BULAT POSITIF"<<endl;
   cout<<"==============================="<<endl;
   cout<<"Masukan Bilangan (Bulat Positif):"<<endl;
   
    cin>>x;	
	cout<<" = "<<fak(x)<<endl;		
	cout<<" ~ Error @Line 27 Missing,\n was not variable string cout<< ";		
	cout<<" ;-) ";		
	
}

int fak(int x) 
{
	int deal=1, i;		
	for(i=x;i>0;i--)
	{
		if(i!=1)
			cout<<i<<"x";
			else
			cout<<"1";
			deal=deal*i;
	}
	return deal;
}
