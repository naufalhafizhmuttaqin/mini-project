#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int bil1,bil2, pil;
	float hasil;
	string operasi, loop;
	
	do{
		system("cls");
		cout<<endl;
		cout<<"\t\t\tKALKULATOR"<<endl;
		cout<<"=========================================="<<endl<<endl;
		cout<<"1. Penjumlahan"<<endl<<endl;
		cout<<"2. Pengurangan"<<endl<<endl;
		cout<<"3. Perkalian"<<endl<<endl;
		cout<<"4. Pembagian"<<endl<<endl;
		cout<<"5. Modulus"<<endl<<endl;
		cout<<endl;
		
		cout<<"Masukkan Pilihan          = "; cin>>pil;
		cout<<endl;
		cout<<"Masukkan Bilangan Pertama = "; cin>>bil1;
		cout<<endl;
		cout<<"Masukkan Bilangan Kedua   = "; cin>>bil2;
		cout<<endl;	
		
		switch(pil){
		    case 1 : 
				hasil=bil1+bil2;
				operasi='+';
				break;
			case 2 : 
				hasil=bil1-bil2;
				operasi='-';
				break;
			case 3 : 
				hasil=bil1*bil2;
				operasi='*';
				break;
			case 4 : 
				hasil=bil1/bil2;
				operasi='/';
				break;
			case 5 : 
				hasil=bil1%bil2;
				operasi='%';
				break;
			default :
				cout<<"Salah Masukan Operator"<<endl;
		}
		cout<<"-----------------------------"<<endl;
		cout<<"    "<<bil1<<" "<<operasi<<" "<<bil2<<" = "<<hasil<<endl;
		cout<<"-----------------------------"<<endl;
		cout<<"Ulang? (y/n) = "; cin>>loop;
		
	} while(loop == "y");
	cout<<"PROGRAM SELESAI";
}
