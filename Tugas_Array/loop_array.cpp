/*	TUGAS ARRAY
*	OLEH FAJAR WINATA NIM. 16.111.195
*	KELAS TIF RM 16C STT BANDUNG
*/	

#include <iostream>

using namespace std;

int main(){
	//KAMUS
	
	
	char h; //variabel penentu jumlah
	int y=0, sum=0, n;
	//ALGORITMA	
	cout<<"masukan jumlah huruf:\n";
	cin>>n;
	
	char huruf[n-1]; //variabel utama yang akan ditampilkan outputnya
	while(y <= n-1){
			cout<<"+---+\n";
			cout<<"> ";cin>>huruf[y]; //huruf
			y++;
	}
	
	for(int x=0; x<=n-1; x++ ){
	cout<<"huruf ke-"<<x<<": "<<huruf[x]<<"\n";
	}
	
	cout<<"masukan huruf penentu\n";
	cin>>h;
	
	for(int y=0; y<=n-1; y++ ){
	if(h == huruf[y]){int v=1; sum+=v; }
	}
	
	
	cout<<"jumlah huruf "<<h<<" : sebanyak: "<<sum;
	
}
