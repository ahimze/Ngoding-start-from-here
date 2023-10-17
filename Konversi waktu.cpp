#include<iostream>
using namespace std;

int main(){
int jam , detik, menit, sisa, s;

cout<<"========================="<<endl;
cout<<"=====Konversi wakktu====="<<endl;
cout<<"========================="<<endl;
cout<<"= Masukkan Detik = ";cin>>s;
cout<<"========================="<<endl;
jam = s / 3600;
sisa = s % 3600;
menit = sisa / 60;
detik = sisa % 60;
cout<<"hasil = "<<jam<<" jam "<<menit<<" menit "<< detik<< " detik " << endl;
}
