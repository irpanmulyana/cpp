/*	TUGAS MANIPULASI DATA IP MAHASISWA
*	OLEH FAJAR WINATA NIM. 16.111.195
*	KELAS TIF RM 16C STT BANDUNG
*/	

#include <iostream> //input & output stream
#include <sstream> //string converter

using namespace std;


int main()
{
    float ip[100], tertinggi=0, terendah=4, num, sum_ip=0;
	int lulus=0, tdk_lulus=0, error_kebawah=0, error_keatas=0;
	int i=1, pembagi;
	stringstream stream;
	
	cout<<"--------PROGRAM MANIPULASI DATA IP MAHASISWA-------"<<endl<<endl;
	cout<<"==================================================="<<endl<<endl;

	while (ip[i-1] != -999) {
        cout<<"Rekaman Ke-"<<i<<"\n";
		cout<<"Masukkan Nilai:";
        cin>>ip[i];
		
		if(ip[i]>=0 && ip[i]<=4){ //Mencari mahasiswa yang lulus 
			if(ip[i]>=2.75){
				lulus++;	
			}
			else if(ip[i]<2.75){ //Mencari mahasiswa yang tidak lulus
				tdk_lulus++;	
			}
			
			if (ip[i] > tertinggi){ tertinggi = ip[i]; }
			if (ip[i] < terendah){ terendah = ip[i]; }
			
			sum_ip+=ip[i];
			pembagi	=	i;
		}
		else if(ip[i] < 0 || ip[i] > 4){
			/* Pembatasan rentangan angka margin error 
			 * dari 10 s/d -1 dan dari 5 s.d 10		
			 */
			if(ip[i] > -11 && ip[i] < 1){
				error_kebawah++;	
			}
			else if(ip[i] > 4 && ip[i] < 11){
				error_keatas++;	
			}
		}
		
		i++;
    }
	
	
	float rata 		= (sum_ip/pembagi);
	int jml_m		= i-2;
	int error		= error_kebawah + error_keatas;
	
        
	cout<<endl;
		cout<<"+===================================================+"<<endl<<endl;
    if(i!=1){ //cek jumlah i
		cout<<"+--------------------LAPORAN DATA-------------------+"<<endl<<endl;
		cout<<"+----------------------------------------+----------+"<<endl;
		cout<<"| Jumlah Mahasiswa                       |   "<<jml_m<<"      |"<<endl;
		cout<<"+----------------------------------------+----------+"<<endl;
		cout<<"| Jumlah Mahasiswa Yang Lulus            |   "<<lulus<<"      |"<<endl;
		cout<<"+----------------------------------------+----------+"<<endl;
		cout<<"| Jumlah Mahasiswa Yang Tidak Lulus      |   "<<tdk_lulus<<"      |"<<endl;
		cout<<"+----------------------------------------+----------+"<<endl;
		cout<<"| Nilai Tertinggi                        |   "<<tertinggi<<"      |"<<endl;
		cout<<"+----------------------------------------+----------+"<<endl;
		cout<<"| Nilai Terendah                         |   "<<terendah<<"      |"<<endl;
		cout<<"+----------------------------------------+----------+"<<endl;
		cout<<"| Nilai Rata-Rata                        |   "<<rata<<endl;
		cout<<"+----------------------------------------+----------+"<<endl<<endl;
		cout<<"| Data error (angka tidak sesuai syarat) |   "<<error<<"      |"<<endl;
		cout<<"+----------------------------------------+----------+"<<endl<<endl;
		cout<<"Note: Angka diatas 11 dan dibawah -11 tidak akan di proses"<<endl<<endl;
	}
	else {
		cout<<"Tidak Ada Data";
	}
    
	return 0;
}