#include<iostream>
using namespace std;
int main (){
double alas, tinggi, d, r, luas1, luas3;
const double phi = 3.14159;

cout<<"========Rumus Segitga========"<<endl;
cout<< "Masukkan Alas = ";cin>>alas;
cout<< "Masukkan Tinggi = ";cin>>tinggi;
cout<<"============================="<<endl;
luas3 = 0.5 * alas * tinggi;

system("cls");
cout<<"============HASIL============"<<endl;
cout<< "LUAS = "<<luas3<<endl;
cout<<"=============================\n\n"<<endl;
system("pause");

system("cls");
cout<<"=======Rumus Lingkaran======="<<endl;	
cout<< "Masukkan d = ";cin>> d; 
cout<< "Masukkan r = ";cin>> r;
cout<<"=============================\n\n"<<endl;
if (d ==  0){
luas1= phi * r * r;
}
else if (d >= 0 ){
r=0;
luas1= phi * d;
}
system("cls");
cout<<"=======Rumus Lingkaran======="<<endl;
cout<<"LUAS = "<<luas1<<endl;
cout<<"r = "<<r;
cout<<"=============================\n\n"<<endl;
}

