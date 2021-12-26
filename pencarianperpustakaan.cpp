#include <iostream>
using namespace std;

void genree(){
    string genre[4] = {"Horror", "Fantasy", "Action", "Romance"};
    for(int i = 0; i < 4; i++) {
    cout << i << ". " << genre[i] << "\n";
	}
}

string jeniss(){
    string jenis[3] = {"Buku", "Novel", "Komik"};
    for(int i = 0; i < 3; i++) {
    cout << i << ": " << jenis[i] << "\n";
    }
}

int main()
{
 int data[4][3];
 int genre,jenis;
 
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

cout<<"==================================="<<endl; 
cout<<"Data Peminjaman Perpustakaan"<<endl;
cout<<"==================================="<<endl; 
cout<<"Pilih salah satu genre"<<endl;
while(1){
    genree(); 
    cout<<"Pilih nomor: ";cin>>genre;
    if(genre<4 && genre>=0){
    break;}
	else {cout << "Nomor tidak valid. Masukkan ulang" << endl;}
}

cout<<"==================================="<<endl; 
cout<<"Pilih salah satu jenis"<<endl;
while(1){
 jeniss();
 cout<< "Pilih nomor: ";cin>>jenis;
 if(jenis<3 && jenis>=0){
 break;}
 else {cout << "Nomor tidak valid. Masukkan ulang" << endl;}
}

cout<<"==================================="<<endl; 
cout<<"Jumlah peminjaman : " <<data[genre][jenis]<<endl;


return 0;
}
