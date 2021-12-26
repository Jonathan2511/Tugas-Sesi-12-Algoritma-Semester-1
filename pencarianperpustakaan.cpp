// DATA PERPUSTAKAAN PERBULAN
// KELOMPOK 4 SEMESTER 1 KJ004
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

void bulann(){
    string bulan[4] = {"Mei", "Juni", "July", "Agustus"};
    for(int i = 0; i < 4; i++) {
    cout << i << ". " << bulan[i] << "\n";
	}
	return;
}

string jeniss(){
    string jenis[3] = {"Buku", "Novel", "Komik"};
    for(int i = 0; i < 3; i++) {
    cout << i << ": " << jenis[i] << "\n";
    } 
    return "jenis";
} 

int main()
{
 int data[4][3];
 int bulan,jenis;
 
 data[0][0]=12;
 data[0][1]=16;
 data[0][2]=13;
 
 data[1][0]=15; 
 data[1][1]=14; 
 data[1][2]=10; 
 
 data[2][0]=8; 
 data[2][1]=10; 
 data[2][2]=12;
 
 data[3][0]=16; 
 data[3][1]=12;
 data[3][2]=12;


while(1){
cout<<"====================================="<<endl; 
cout<<"Data Peminjaman Perpustakaan Perbulan"<<endl;
cout<<"====================================="<<endl; 
cout<<"Pilih salah satu bulan"<<endl;
    bulann(); 
    cout<<"Pilih nomor: ";cin>>bulan;
    if(bulan<4 && bulan>=0){
    break;}
	else {cout << "Nomor tidak valid. Masukkan ulang" << endl;}
	system ("CLS");
	cout << "\033[1;31m!!!NOMOR YANG DIMASUKKAN TIDAK VALID. SILAHKAN MASUKKAN ULANG!!!\033[0m" << endl;
}

while(1){
cout<<"====================================="<<endl; 
cout<<"Pilih salah satu jenis"<<endl;
cout<<"====================================="<<endl; 
 jeniss();
 cout<< "Pilih nomor: ";cin>>jenis;
 if(jenis<3 && jenis>=0){
 break;}
 else {cout << "Nomor tidak valid. Masukkan ulang" << endl;}
 system ("CLS");
 cout << "\033[1;31m!!!NOMOR YANG DIMASUKKAN TIDAK VALID. SILAHKAN MASUKKAN ULANG!!!\033[0m" << endl;	

}

cout<<"====================================="<<endl; 
cout<<"Jumlah peminjaman : " <<data[bulan][jenis]<< " orang"<<endl;


return 0;
}
