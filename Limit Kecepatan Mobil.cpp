#include<iostream>
using namespace std;

int main(){
const float LIMIT =  60.0;
int mobil;
float fast;

cout<<"\nMasukkan nomor mobil  : ";	
cin >> mobil;
cout<<"\nMasukkan kecepatan mobil : ";	
cin >> fast;
if (fast > LIMIT)
cout<<"mobil "<<mobil<<" melebihi batas kecepatan.\n"<<"dengan kecepatan "<<fast<<" kmh\n";

cout<<"akhir dari program .";
return 0;



}
