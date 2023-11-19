#include<iostream>
using namespace std;
/**
*Menentukan Nilai Terbesar Dari 2 Inputan
*/

int main() {
    int a, b;
    cout << "menentukan nilai terbesar 2 buah input \n";
    cout << "masukkan nilai 1 : "; cin >> a;
    cout << "masukkan nilai 2 : "; cin >> b;

    if ( a > b )
        cout << "nilai terbesar   : " << a << endl;
    else
        cout << "nilai terbesar   : " << b << endl;

    return 0;
}
