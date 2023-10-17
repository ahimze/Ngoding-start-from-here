#include<bits/stdc++.h>
using namespace std;

int main (){
int nik;
int tanggal, bulan, tahun, rt, rw;
string nama, tempat, jenis, gol, alamat, kelurahan, kecamatan, agama, status, pekerjaan, kewarga;

cout<<"============================================="<<endl; 
cout<<"Masukkan NIK : ";cin>>nik;
cin.ignore();
cout<<"Masukkan Nama : ";getline(cin,nama);
cout<<"Masukkan Tempat Lahir : ";cin>>tempat;
cout<<"Masukkan Tanggal Lahir : ";cin>>tanggal;
cout<<"Masukkan Bulan Lahir : ";cin>>bulan;
cout<<"Masukkan Tahun Lahir : ";cin>>tahun;
cout<<"Masukkan Jenis Kelamin : ";cin>>jenis;
cout<<"Masukkan Golongan darah : ";cin>>gol;
cin.ignore();
cout<<"Masukkan Alamat : ";cin>>alamat;
cout<<"Masukkan RT : ";cin>>rt;
cout<<"Masukkan RW : ";cin>>rw;
cout<<"Masukkan Kelurahan : ";cin>>kelurahan;
cout<<"Masukkan Kecamatan : ";cin>>kecamatan;
cout<<"Masukkan Agama : ";cin>>agama;
cout<<"Masukkan Status Perkawinan : ";cin>>status;
cout<<"Masukkan Pekerjaan : ";cin>>pekerjaan;
cout<<"Masukkan Kewarganegaraan : ";cin>>kewarga;
cout<<"============================================="<<endl<<endl<<endl;
cout<<"============================================="<<endl;
cout<<"Output"<<endl;
cout<<"NIK\t\t\t\t:"<<nik<<endl;
cout<<"Nama\t\t\t\t:"<<nama<<endl;
cout<<"TTL\t\t\t\t:"<<tempat<<", "<<tanggal<<"-"<<bulan<<"-"<<tahun<<endl;
cout<<"Jenis Kelamint\t\t\t:"<<jenis<<endl;
cout<<"Alamat\t\t\t\t:"<<alamat<<endl;
cout<<"RT/RT\t\t\t\t:"<<rt<<"/"<<rw<<endl;
cout<<"Kel/Desa\t\t\t:"<<kelurahan<<endl;
cout<<"Kecamatan\t\t\t:"<<kecamatan<<endl;
cout<<"Agama\t\t\t\t:"<<agama<<endl;
cout<<"Status Perkawinan\t\t:"<<status<<endl;
cout<<"Pekerjaan\t\t\t:"<<pekerjaan<<endl;
cout<<"Kewarganegaraan\t\t\t:"<<kewarga<<endl;
cout<<"============================================="<<endl;
}
