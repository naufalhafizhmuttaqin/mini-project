#include <iostream>
using namespace std;

string nama,id,departemen,jenisKelamin,nilai;
int kehadiran=0,kedisiplinan=0,kualitas=0,kerjasama=0,tanggungJawab=0;
int a,b,c,d,e,f,g,h,k,j,jumlah,rataRata;
string pilihan[5]={"Sangat Setuju","Setuju","Ragu-Ragu","Tidak Setuju","Sangat Tidak Setuju"};

void dataDiri(){
	cout<<"DATA DIRI"<<endl;
	cout<<"Nama \t\t= ";       cin>>nama; 
    cout<<"ID \t\t= ";         cin>>id;
    cout<<"Departemen \t= ";   cin>>departemen;
    cout<<"Jenis Kelamin \t= ";cin>>jenisKelamin;
}

void formKuesioner(){
	cout<<"\nFORM KUESIONER EVALUASI KINERJA KARYAWAN\n"<<endl;
	
	cout<<"Isilah kuesioner dibawah ini dengan memilih pilihan dibawah.(pilih 1-5)"<<endl;
	for(int i=0;i<5;i++){
		cout<<i+1<<". "<<pilihan[i]<<endl;
	}
	
	cout<<"\nKaryawan Anda selalu hadir di kantor. "; cin>>a;
	if(a==1){
		kehadiran = kehadiran + 50;
	}else if(a==2){
		kehadiran = kehadiran + 40;
	}else if(a==3){
		kehadiran = kehadiran + 30;
	}else if(a==4){
		kehadiran = kehadiran + 20;
	}else if(a==5){
		kehadiran = kehadiran + 10;
	}
	
	cout<<"Karyawan Anda selalu datang tepat waktu. "; cin>>b;
	if(b==1){
		kehadiran = kehadiran + 50;
	}else if(b==2){
		kehadiran = kehadiran + 40;
	}else if(b==3){
		kehadiran = kehadiran + 30;
	}else if(b==4){
		kehadiran = kehadiran + 20;
	}else if(b==5){
		kehadiran = kehadiran + 10;
	}
	
	cout<<"Karyawan Anda selalu menyelesaikan pekerjaan sesuai deadline. "; cin>>c;
	if(c==1){
		kedisiplinan = kedisiplinan + 50;
	}else if(c==2){
		kedisiplinan = kedisiplinan + 40;
	}else if(c==3){
		kedisiplinan = kedisiplinan + 30;
	}else if(c==4){
		kedisiplinan = kedisiplinan + 20;
	}else if(c==5){
		kedisiplinan = kedisiplinan + 10;
	}
	
	cout<<"Karyawan Anda selalu menaati peraturan kantor. "; cin>>d;
	if(d==1){
		kedisiplinan = kedisiplinan + 50;
	}else if(d==2){
		kedisiplinan = kedisiplinan + 40;
	}else if(d==3){
		kedisiplinan = kedisiplinan + 30;
	}else if(d==4){
		kedisiplinan = kedisiplinan + 20;
	}else if(d==5){
		kedisiplinan = kedisiplinan + 10;
	}
	
	cout<<"Karyawan Anda bekerja dengan efektif dan efisien. "; cin>>e;
	if(e==1){
		kualitas = kualitas + 50;
	}else if(e==2){
		kualitas = kualitas + 40;
	}else if(e==3){
		kualitas = kualitas + 30;
	}else if(e==4){
		kualitas = kualitas + 20;
	}else if(e==5){
		kualitas = kualitas + 10;
	}
	
	cout<<"Karyawan Anda kosisten dalam mempertahankan performa kerjanya. "; cin>>f;
	if(f==1){
		kualitas = kualitas + 50;
	}else if(f==2){
		kualitas = kualitas + 40;
	}else if(f==3){
		kualitas = kualitas + 30;
	}else if(f==4){
		kualitas = kualitas + 20;
	}else if(f==5){
		kualitas = kualitas + 10;
	}
	
	cout<<"Karyawan Anda pandai bekerjasama dengan rekannya. "; cin>>g;
	if(g==1){
		kerjasama = kerjasama + 50;
	}else if(g==2){
		kerjasama = kerjasama + 40;
	}else if(g==3){
		kerjasama = kerjasama + 30;
	}else if(g==4){
		kerjasama = kerjasama + 20;
	}else if(g==5){
		kerjasama = kerjasama + 10;
	}
	
	cout<<"Karyawan Anda memiliki hubungan yang baik dengan rekannya. "; cin>>h;
	if(h==1){
		kerjasama = kerjasama + 50;
	}else if(h==2){
		kerjasama = kerjasama + 40;
	}else if(h==3){
		kerjasama = kerjasama + 30;
	}else if(h==4){
		kerjasama = kerjasama + 20;
	}else if(h==5){
		kerjasama = kerjasama + 10;
	}
	
	cout<<"Karyawan Anda selalu melaksanakan pekerjaan sesuai dengan tugas dan perintah yang diberikan. "; cin>>k;
	if(k==1){
		tanggungJawab = tanggungJawab + 50;
	}else if(k==2){
		tanggungJawab = tanggungJawab + 40;
	}else if(k==3){
		tanggungJawab = tanggungJawab + 30;
	}else if(k==4){
		tanggungJawab = tanggungJawab + 20;
	}else if(k==5){
		tanggungJawab = tanggungJawab + 10;
	}
	
	cout<<"Karyawan Anda jujur dalam melakukan pekerjaannya. "; cin>>j;
	if(j==1){
		tanggungJawab = tanggungJawab + 50;
	}else if(j==2){
		tanggungJawab = tanggungJawab + 40;
	}else if(j==3){
		tanggungJawab = tanggungJawab + 30;
	}else if(j==4){
		tanggungJawab = tanggungJawab + 20;
	}else if(j==5){
		tanggungJawab = tanggungJawab + 10;
	}
}

void penilaian(){
	jumlah = kehadiran+kedisiplinan+kualitas+kualitas+tanggungJawab;
	rataRata = (kehadiran+kedisiplinan+kualitas+kualitas+tanggungJawab) / 5;   
	
	if(rataRata<=20){
	    nilai="E";
	} else if(rataRata<=40){
	    nilai="D";
	} else if(rataRata<=60){
	    nilai="C";
	} else if(rataRata<=80){
	    nilai="B";
	} else if(rataRata<=100){
	    nilai="A";
	}
}

void laporanKinerja(){
	cout<<"\t\tKinerja Karyawan"<<endl;
	cout<<"\t\tPerusahaan X"    <<endl;
    cout<<"==============================================="<<endl;
    cout<<"Nama \t\t= "         <<nama<<endl; 
    cout<<"ID \t\t= "           <<id<<endl;
    cout<<"Departemen \t= "     <<departemen<<endl;
    cout<<"Jenis Kelamin \t= "  <<jenisKelamin<<endl;
    cout<<"==============================================="<<endl;
    cout<<"\t\tPerilaku Kerja"  <<endl;
    cout<<"Kehadiran \t= "      <<kehadiran<<endl;
    cout<<"Kedisiplinan \t= "   <<kedisiplinan<<endl;
    cout<<"Kualitas \t= "       <<kualitas<<endl;
	cout<<"Kerjasama \t= "      <<kerjasama<<endl;
    cout<<"Tanggung jawab \t= " <<tanggungJawab<<endl;
    cout<<"==============================================="<<endl;
    cout<<"Jumlah \t\t\t\t= "             <<jumlah<<endl;
    cout<<"Rata-Rata Nilai Perilaku  \t= "<<rataRata<<endl;
    cout<<"Nilai Prestasi Kerja \t\t= "   <<nilai<<endl;
}

int main(){
	dataDiri();
	formKuesioner();
	penilaian();
	system("cls");
	laporanKinerja();
}

