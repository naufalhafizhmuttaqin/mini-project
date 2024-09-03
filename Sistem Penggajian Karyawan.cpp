#include<iostream>
using namespace std;

struct data
{
 int NIP, tl, hadir, disiplin, kinerja, kom, jum, rat;
 int pendidikan, pengetahuan, kewirausaha;
 string nilai;
 char nama[30];
 char typek[20];
 char jkel[10];
 char tanggal[20];
};
 
int main(){
	int menu, tl, pilih, namedit;
	int pendidikan, pengetahuan, kewirausaha;
	int hadir, disiplin, kinerja;
	int kom, jum, rat;
	string nilai;
	int nip = -1,i,j,a;
	data kar[20];
	char get[1];
	bool ketemu;
	string exit;
	
	menuutama:
	system("cls");
	cout<<" \nMENU UTAMA\n\n";
	cout<<" 1.Input Data Karyawan\n\n";
	cout<<" 2.Mencari Data Karyawan\n\n";
	cout<<" 3.Menampilkan Data Karyawan\n\n";
	cout<<" 4.Key Performance Indicator\n\n";
	cout<<" 5.Keluar\n\n";
	cout<<" _____________________________\n\n";
	cout<<" Masukan Pilihan Anda : "; cin>>menu;
 
	if(menu==1){
 
	system("cls");
	nip++;
	cout<<"\n DATA KARYAWAN\n";
	cout<<" _________________________________________________________________\n\n";
	cout<<" NIP                        = "; cin>>kar[nip].NIP; cin.getline(get,1);
	cout<< endl; 
	cout<<" Nama                       = "; cin.getline(kar[nip].nama,30);
	cout<< endl;
	cout<<" Jenis Karyawan             = "; cin.getline(kar[nip].typek,20);
	cout<< endl;
	cout<<" Jenis Kelamin              = "; cin.getline(kar[nip].jkel,10);
	cout<< endl;
	cout<<" Tanggal Lahir (DD MM YYYY) = "; cin.getline(kar[nip].tanggal,20);
	cout<< endl<<endl;

 	cout<<"_________________________________________________________________\n\n";
 	cout<<" 1.Kembali ke Menu Utama\n\n";
 	cout<<" 2.Keluar dari program\n";
 	cout<<" _____________________________\n\n";
 	cout<<" Masukan Pilihan Anda : "; cin>>pilih;
 	cout<<endl;
 	
	if(pilih==1){
 		goto menuutama;
	} else if(pilih==2){
 		goto keluar;
	}
 }
 
	else if(menu==2){
	system ("cls");
	cout<<"\n PENCARIAN DATA KARYAWAN\n";
	cout<<" _________________________________________________________________\n\n";
	cout<<" Masukan NIP = "; cin>>namedit;
	cout<<endl;
 	
	for(a=0;a<=nip;a++){
		if(namedit==kar[a].NIP){
			cout<<" Data di temukan pada registrasi data ke-"<<a+1<<endl<<endl;
			cout<<" Nama Lengkap     = "<<kar[a].nama<<endl;
			cout<<endl;
			cout<<" Jenis Karyawan   = "<<kar[a].typek<<endl;
			cout<<endl;
			cout<<" Jenis Kelamin    = "<<kar[a].jkel<<endl;
			cout<<endl;
			cout<<" Tanggal Lahir    = "<<kar[a].tanggal<<endl;
			cout<<endl;
			cout<<" Kehadiran        = "<<kar[a].hadir<<endl;
			cout<<endl<<endl;
			cout<<" Kedisiplinan     = "<<kar[a].disiplin<<endl;
			cout<<endl;
			cout<<" Kinerja          = "<<kar[a].kinerja<<endl;
			cout<<"\t\tKey Performance Indicator"<<endl<<endl;
			cout<<" Kinerja          = "<<kar[a].kinerja;
			cout<< endl;
			cout<<" Kompetensi"<<endl;
			cout<<"_____________________________________________________"<<endl<<endl;
			cout<<" Pendidikan       = "<<kar[a].pendidikan;
			cout<<endl;
			cout<<" Pengetahuan      = "<<kar[a].pengetahuan;
			cout<<endl; 
			cout<<" Kewirausahaan    = "<<kar[a].kewirausaha;
			cout<<endl;
			cout<<"_____________________________________________________"<<endl<<endl;
			cout<<" Nilai Kompetensi = "<<kom;
			cout<<endl;
			cout<<" Total            = "<<jum;
			cout<<endl;
			cout<<" Rata-Rata        = "<<rat;
			cout<<endl;
			cout<<" Persentase       = "<<nilai;
			cout<<endl;
			cout<<"_____________________________________________________\n\n";
			goto menu0;
		}
	}
	cout<<" DATA YANG ANDA CARI TIDAK DI TEMUKAN !!!\n\n";
	cout<<" ________________________________________\n\n";
	menu0:
	cout<<" 1.Kembali ke Menu Utama\n\n";
	cout<<" 2.Keluar dari program\n";
	cout<<" _____________________________\n\n";
	cout<<" Masukan Pilihan Anda : "; cin>>pilih;
 
	if(pilih==1){
		goto menuutama;
	} else if(pilih==2){
		goto keluar;
	}
}

	else if(menu==3){
	system ("cls");
	cout<<"\n MENAMPILKAN DATA KARYAWAN\n";
	cout<<"_________________________________________________________________\n\n";
	for(a=0;a<=nip;a++){
		cout<<" Database Data Karyawan ke-"<<a+1<<endl<<endl;
		cout<<" NIP              = "<<kar[a].NIP<<endl<<endl;
		cout<<" Nama             = "<<kar[a].nama<<endl<<endl;
		cout<<" Jenis Karyawan   = "<<kar[a].typek<<endl<<endl;
		cout<<" Tanggal Lahir    = "<<kar[a].tanggal<<endl<<endl<<endl;
		cout<<" Kehadiran        = "<<kar[a].hadir<<endl<<endl;
		cout<<" Kedisiplinan     = "<<kar[a].disiplin<<endl<<endl;
		cout<<" \t\tKey Performance Indicator"<<endl<<endl;
		cout<<" Kinerja          = "<<kar[a].kinerja;
		cout<<endl;
		cout<<" Kompetensi"<<endl;
		cout<<"_________________________________________________________________"<<endl;
		cout<<" Pendidikan       = "<<kar[a].pendidikan;
		cout<<endl;
		cout<<" Pengetahuan      = "<<kar[a].pengetahuan;
		cout<<endl;
		cout<<" Kewirausahaan    = "<<kar[a].kewirausaha;
		cout<<endl;
		cout<<"_________________________________________________________________"<<endl;
		cout<<" Nilai Kompetensi = "<<kom;
		cout<<endl;
		cout<<" Total            = "<<jum;
		cout<<endl;
		cout<<" Rata-Rata        = "<<rat;
		cout<<endl;
		cout<<" Persentase       = "<<nilai;
		cout<<endl;
		cout<<"=================================================================="<<endl<<endl<<endl<<endl;
	}
	cout<<" _____________________________________________\n\n";
	cout<<" 1.Kembali ke menu awal\n\n";
	cout<<" 2.keluar dari program\n";
	cout<<" _____________________________\n\n";
	cout<<" Masukan Pilihan Anda : "; cin>>pilih;
	if(pilih==1){
		goto menuutama;
	} else if(pilih==2){
		goto keluar;
	}
	
	keluar:
	system("cls");
	cout<<"\n TERIMA KASIH\n";
}

	else if(menu==4){
	system("cls");	
	for(a=0;a<=nip;a++){
		cout<<" Database Data Karyawan ke-"<<a+1<<endl<<endl;
		cout<<" NIP              = "<<kar[a].NIP<<endl<<endl;
		cout<<" Nama             = "<<kar[a].nama<<endl<<endl;
		cout<<" Jenis Karyawan   = "<<kar[a].typek<<endl<<endl;
		cout<<" Tanggal Lahir    = "<<kar[a].tanggal<<endl<<endl<<endl;
	}
 	for(a=0;a<=nip;a++){
 		cout<<" Kehadiran        = "; cin>>kar[nip].hadir;
		cout<< endl;
		cout<<" Kedisiplinan     = "; cin>>kar[nip].disiplin;
		cout<< endl;
		cout<<"================================================================"<<endl;
		cout<<"\t\tKey Performance Indicator"<<endl<<endl;
		cout<<" Kinerja          = "; cin>>kar[nip].kinerja;
		cout<< endl;
		cout<<" Kompetensi"<<endl;
		cout<<"_________________________________________________________________"<<endl;
		cout<<" Pendidikan       = "; cin>>kar[nip].pendidikan;
		cout<<endl;
		cout<<" Pengetahuan      = "; cin>>kar[nip].pengetahuan;
		cout<<endl;
		cout<<" Kewirausahaan    = "; cin>>kar[nip].kewirausaha;
		cout<<endl;
		cout<<"_________________________________________________________________"<<endl;
		
		kom = (kar[nip].pendidikan+kar[nip].pengetahuan+kar[nip].kewirausaha) / 3;
		jum = kar[nip].hadir+kar[nip].disiplin+kar[nip].kinerja+kom;
		rat = jum / 4;
		
		if(rat<=20){
		    nilai="E";
		} else if(rat<=40){
		    nilai="D";
		} else if(rat<=60){
		    nilai="C";
		} else if(rat<=80){
		    nilai="B";
		} else if(rat<=100){
		    nilai="A";
		}
		
		cout<<" Nilai Kompetensi = "<<kom;
		cout<<endl;
		cout<<" Total            = "<<jum;
		cout<<endl;
		cout<<" Rata-Rata        = "<<rat;
		cout<<endl;
		cout<<" Persentase       = "<<nilai;
		cout<<endl;
	 	cout<<"_________________________________________________________________\n\n";
	 	cout<<" 1.Kembali ke Menu Utama\n\n";
	 	cout<<" 2.Keluar dari program\n";
	 	cout<<" _____________________________\n\n";
	 	cout<<" Masukan Pilihan Anda : "; cin>>pilih;
	 	cout<<endl;
	 	
		if(pilih==1){
	 		goto menuutama;
		} else if(pilih==2){
	 		goto keluar;
		}
	}	
 }
 	else if(menu==5){
 		system("cls");	
 		cout<<"YAKIN KELUAR DARI PROGRAM ? "; cin>>exit;
 		if(exit=="yes"){
 			goto keluar;
		} else if(exit=="no"){
			goto menuutama;
		} 
	 }
}

