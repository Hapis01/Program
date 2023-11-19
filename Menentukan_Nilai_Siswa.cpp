#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string Nama;
	float nilai[4];
    float total = 0;
    float rata_rata;

	cout<<"Masukkan Nama Siswa: ";
	getline(cin, Nama);
	cout<<"Nama Siswa "<<Nama<<endl;


	cout<<"Masukkan Nilai Ujian Matematika: ";
    cin>>nilai[0];
    cout<<"Masukkan Nilai Ujian Bahasa indonesia: ";
    cin>>nilai[1];
    cout<<"Masukkan Nilai Ujian Bahasa inggris: ";
    cin>>nilai[2];
    cout<<"Masukkan Nilai Ujian PKN: ";
    cin>>nilai[3];
    
    
	for (int i = 0; i < 4; i++) {
    	total += nilai[i];
    }
    rata_rata = total / 4;
	cout<<"Nilai rata-rata ujian adalah: "<<rata_rata<<endl;
	
    if(rata_rata >= 95 && rata_rata <=100)
    {
        cout<<"Nilai rata-rata anda\t: Sempurna"<<endl;
    }
    else if(rata_rata >= 80 && rata_rata <=94)
    {
        cout<<"Nilai rata-rata anda\t: Cukup baik"<<endl;
    }
    else if(rata_rata >= 70 && rata_rata <=79)
    {
        cout<<"Nilai rata-rata anda\t: Baik, Teruskan"<<endl;
    }
    else if(rata_rata >= 60 && rata_rata <=69)
    {
        cout<<"Nilai rata-rata anda\t: Cukup, Kurang memuaskan"<< endl;
    }
    else if(rata_rata >= 50 && rata_rata <=59)
    {
        cout<<"Nilai rata-rata anda\t: Kurang, Remedial"<<endl;
    }
    else if(rata_rata >= 1 && rata_rata <=49)
    {
        cout<<"Nilai rata-rata anda\t: Gagal, tidak lulus"<<endl;
    }
    

	return 0;
}