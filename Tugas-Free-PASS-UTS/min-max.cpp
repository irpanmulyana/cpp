/*	TUGAS PROSEDUR MIN-MAX SOLUTION
*	OLEH FAJAR WINATA NIM. 16.111.195
*	KELAS TIF RM 16C STT BANDUNG
*/	

#include <iostream> //input & output stream
#include <stdlib.h> //standard Lib Windows CMD
#include <conio.h>
#include "pilihanA.h"
#include "pilihanB.h"


using namespace std;

void judul_utama();

int main(){
	int pil;
	system("CLS");
		judul_utama();
		cout<<"\n"<<"Pilihan :";
		cin>>pil;
		
		if(cin.fail()){
			cin.clear(); cin.ignore(); main();
		} else {		
			//seleksi data
			if(pil == 1){ pilihanA(); }
			else if(pil == 2){ pilihanB(); }
			else{
				main();
			}
		}		
	
}

void judul_utama(){
	cout<<"    HIMPUNAN BILANGAN BULAT   \n";
	cout<<"------------------------------\n";
	cout<<"Menu Manipulasi Data Himpunan:\n";
	cout<<"1. Nilai Minimum\n";
	cout<<"2. Nilai Maximum\n";
}