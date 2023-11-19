#include <iostream>
using namespace std;

int main() {
    double alas, tinggi;
    cout << "Masukkan panjang alas segitiga: ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    double luas = 0.5 * alas * tinggi;

    cout << "Luas segitiga adalah: " << luas << endl;

    return 0;
}
