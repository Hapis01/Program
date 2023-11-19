#include <iostream>
#include <string>
using namespace std;

int main() {
    string sarjana;
    int usia, dukungan;
    string surat;

    cout << "Masukkan sarjana lulusan anda: ";
    cin >> sarjana;
    


    if ( sarjana != "S1" && sarjana != "S2" && sarjana != "S3"){
        cout << "Pendaftaran ditolak, Lulusan minimal S1.\n";
        return 0;
    }
    
    if (usia < 40 || usia > 65) {
        cout << "Pendaftaran ditolak, Usia minimal 40 sampai 65 tahun.\n";
        return 0;
        
        cout << "Masukkan usia Anda: ";
        cin >> usia;
        return 0;
    }

    if (dukungan < 3000) {
        cout << "Pendaftaran ditolak, Anda harus memiliki minimal 3000 dukungan.\n";
        return 0;
        cout << "Masukkan jumlah dukungan Anda: ";
        cin >> dukungan;
        return 0;
    }
    
    if (surat != "KETERANGAN_SEHAT") {
        cout << "Pendaftaran ditolak, Anda harus memiliki surat keterangan sehat.\n";
        return 0;
        
        cout << "Masukkan surat keterangan sehat Anda: ";
        cin >> surat;
        return 0;
    }
    cout << "Selamat! Pendaftaran Anda telah diterima.\n";
    return 0;
}