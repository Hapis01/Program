
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Input data dari pengguna
    string pekerjaan;
    double penghasilan;
    int jumlah_tanggungan;

    cout << "Masukkan pekerjaan (PNS, TNI, POLRI, NON PNS): ";
    cin >> pekerjaan;

    cout << "Masukkan jumlah penghasilan (dalam jutaan rupiah): ";
    cin >> penghasilan;

    cout << "Masukkan jumlah tanggungan orang tua: ";
    cin >> jumlah_tanggungan;

    // Menentukan UKT berdasarkan kriteria
    double ukt = 0;

    if (pekerjaan == "PNS" || pekerjaan == "TNI" || pekerjaan == "POLRI") {
        if (penghasilan <= 5 && jumlah_tanggungan <= 2) {
            ukt = 2.5;
        } else if (penghasilan <= 10 && jumlah_tanggungan <= 3) {
            ukt = 5;
        } else if (penghasilan > 10 && jumlah_tanggungan <= 4) {
            ukt = 7.5;
        }
    } else if (pekerjaan == "NON PNS") {
        if (penghasilan <= 5 && jumlah_tanggungan <= 3) {
            ukt = 5;
        } else if (penghasilan <= 10 && jumlah_tanggungan <= 4) {
            ukt = 7.5;
        } else if (penghasilan > 10 && jumlah_tanggungan <= 5) {
            ukt = 10;
        }
    }

    // Menampilkan hasil UKT
    cout << "UKT yang Anda tentukan adalah: " << ukt << " juta rupiah." << endl;


}

