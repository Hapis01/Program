#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int Nilai;
	string Nama;
	
	cout<<"Masukkan Nama Siswa: ";
	getline(cin, Nama);
	cout<<"Nama anda "<<Nama<<endl;
	
	cout<<"Masukkan Nilai Siswa :";
    cin>>Nilai;
	
	if(Nilai >= 95 && Nilai <=100)
    {
        cout<<"Pernyataan Nilai\t: Sempurna"<<endl;
    }

    else if(Nilai >= 70 && Nilai <=79)
    {
        cout<<"Pernyataan Nilai\t: Baik, Teruskan"<<endl;
    }
    else if(Nilai >= 60 && Nilai <=69)
    {
        cout <<"Pernyataan Nilai\t: Cukup, Kuranzg memuaskan"<< endl;
    }
    else if(Nilai >= 50 && Nilai <=59)
    {
        cout <<"Pernyataan Nilai\t: Kurang, Remedial"<<endl;
    }
    else if(Nilai >= 1 && Nilai <=49)
    {
        cout <<"Pernyataan Nilai\t: Gagal, tidak lulus"<<endl;
    }

    return 0;
}