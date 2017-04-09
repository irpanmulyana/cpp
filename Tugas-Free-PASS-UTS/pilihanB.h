#include <iostream> //input & output stream
#include <stdlib.h> //standard Lib Windows CMD
#include <conio.h>

using namespace std;

void judul_max();

void pilihanB(){
	system("CLS");
	int x, y=1, sum_max=0;
	int max = -32768; //Minimum pada Tipe data Integer 2 Bytes
		
		//Memasukan Jumlah Anggota Himpunan Bilangan Bulat (INT)
		
		judul_max();
		cout<<"Masukan Jumlah anggota: "<<endl;
		cin>>x;
		
	system("CLS");	
	int z[x];	
		judul_max();
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
		judul_max();
		cout<<"Anggota Himpunan : { ";
		for(int i=1; i<=x; i++){
			if(i == x){ cout<<z[i];}
			else{ cout<<z[i]<<" , ";}
		}
		cout<<" }\n\n";
	
	for(int ii=1; ii<=x; ii++){
		if(z[ii] > max){ max = z[ii];}
		}	
		
	for(int iii=1; iii<=x; iii++){
		if(z[iii] == max){
			int iv = 1;
			sum_max+=iv; 
		}
		}
		
		cout<<"Nilai Tertinggi: "<<max<<"\n\n";
		cout<<"Jumlah Anggota dengan nilai Tertinggi: "<<sum_max<<"\n";
}

void judul_max(){
	cout<<"+-------------------------------+\n";
	cout<<"| HIMPUNAN BILANGAN BULAT (INT) |\n";
	cout<<"+-------------------------------+\n";
	cout<<"|Mencari Angka Tertinggi (MAXI) |\n";
	cout<<"+-------------------------------+\n";
}