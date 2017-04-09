#include <iostream> //input & output stream
#include <stdlib.h> //standard Lib Windows CMD
#include <conio.h>

using namespace std;

void judul_min();

void pilihanA(){
	system("CLS");
	int x, y=1, sum_min=0;
	int min	= 32768; //Maximum pada Tipe data Integer 2 Bytes
		
		//Memasukan Jumlah Anggota Himpunan Bilangan Bulat (INT)
		
		judul_min();
		cout<<"Masukan Jumlah anggota: "<<endl;
		cin>>x;
		
	system("CLS");
	int z[x];	
		judul_min();
		cout<<"|Jumlah Anggota yang diizinkan : "<<x<<" Angka"<<endl;
		cout<<"+------------------------------+ "<<endl;
		cout<<"+Masukan Anggota Himpunan------: "<<endl;
		while(y <= x){
			cout<<"+---+\n";
			cout<<"> ";cin>>z[y]; //Memasukan Anggota Himpunan
			y++;
		}
		
		//Membaca Seluruh Anggota Himpunan
	system("CLS");
		judul_min();
		cout<<"Anggota Himpunan : { ";
		for(int i=1; i<=x; i++){
			if(i == x){ cout<<z[i];}
			else{ cout<<z[i]<<" , ";}
		}
		cout<<" }\n\n";
	
	for(int ii=1; ii<=x; ii++){
		if(z[ii] < min){ min = z[ii]; }
		if(z[ii] == min){ sum_min+=ii; }
		}
		
		cout<<"Nilai Terendah: "<<min<<"\n\n";
		cout<<"Jumlah Anggota dengan nilai Terendah: "<<sum_min<<"\n";	
}

void judul_min(){
	cout<<"+-------------------------------+\n";
	cout<<"| HIMPUNAN BILANGAN BULAT (INT) |\n";
	cout<<"+-------------------------------+\n";
	cout<<"|Mencari Angka Terendah (MINIM) |\n";
	cout<<"+-------------------------------+\n";
}