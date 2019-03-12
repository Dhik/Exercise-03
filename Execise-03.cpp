/*
Nama: Mohammad Dhikri
npm: 140810180075
tanggal pembuatan: 10 Maret 2019
Deskripsi: Warming Up
no : 5
Kelas: A
*/
#include <iostream>
#include <math.h>
using namespace std;
struct segiempat{
	float panjang;
	float lebar;
};

void input (segiempat* s){
	cout<<"Masukan panjang segiempat : "; cin>>s->panjang;
	cout<<"Masukan lebar segiempat : "; cin>>s->lebar;
}
float keliling (segiempat* s){
	int keliling;
	keliling=2*(s->panjang+s->lebar);
}
float luas (segiempat s){
	int luas;
	luas=s.panjang*s.lebar;
}
float diagonal(segiempat* s){
	float diagona;
	diagona=sqrt(s->panjang*s->panjang+s->lebar*s->lebar);
	//cout<<"Diagonal : "<<diagona<<endl;
	return(diagona);
}
void print(segiempat s){
	cout<<"Keliling : "<<keliling(&s)<<endl;
	cout<<"Luas : "<<luas(s)<<endl;
	cout<<diagonal(s);
}
int main(){
	segiempat* s;
	s=new segiempat;
	input(s);
	print(*s);
}
