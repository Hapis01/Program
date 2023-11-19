#include <iostream>
using namespace std;

int main() {
    double bilangan1, bilangan2, hasil;
    char operasi;

    while (true) {
        cout << "Masukkan bilangan pertama: ";
        cin >> bilangan1;

        cout << "Pilih operator (+, -, *, /) atau ketik 'H' untuk keluar: ";
        cin >> operasi;

        if (operasi == 'H') {
            break;
        }

        cout << "Masukkan bilangan kedua: ";
        cin >> bilangan2;

        switch (operasi) {
            case '+':
                hasil = bilangan1 + bilangan2;
                break;
            case '-':
                hasil = bilangan1 - bilangan2;
                break;
            case '*':
                hasil = bilangan1 * bilangan2;
                break;
            case '/':
                if (bilangan2 == 0) {
                    cout << "Error: Pembagian oleh nol tidak diizinkan" << endl;
                    continue;
                }
                hasil = bilangan1 / bilangan2;
                break;
            default:
                cout << "Operator tidak valid" << endl;
                continue;
        }
		cout << "Hasil: " << hasil << endl;
        
		bilangan1 = hasil;
    }
	return 0;
}
