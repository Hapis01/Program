#include <iostream>
using namespace std;

int main() {
    double radius;
    const double pi = 3.14159265359; // Nilai konstanta pi

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> radius;

    double luas = pi * radius * radius;

    cout << "Luas lingkaran adalah: " << luas << endl;

    return 0;
}

