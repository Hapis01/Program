#include<iostream>
#include<iomanip>

using namespace std;

float penjmulahan(float A, float B){
    return A + B;
}
float pengurangan(float A, float B){
    return A - B;
}
float perkalian(float A, float B){
    return A * B;
}
float pembagian(float A, float B){
    return A / B;
}

void hasil(float hasil){
    cout << "hasil dari oprasi hitung adalah: "<< setprecision(9) << hasil << endl;
}

int main(){
    float A,B;
    char pilih;
    cout<<"silahkan pilih operasi yang ingin anda lakukan (+,-,/,*)";
    cin>>pilih;

    switch(pilih){
    case '+':
    cout << "masukan angka pertama: ";
    cin >> A;
    cout << "masukan angka kedua: ";
    cin >> B;
    hasil(penjmulahan(A,B));
    break;

    case '-':
    cout << "masukan angka pertama: ";
    cin >> A;
    cout << "masukan angka kedua: ";
    cin >> B;
    hasil(pengurangan(A,B));
    break;

    case '/':
    cout << "masukan angka pertama: ";
    cin >> A;
    cout << "masukan angka kedua: ";
    cin >> B;
    hasil(pembagian(A,B));
    break;

    case '*':
    cout << "masukan angka pertama: ";
    cin >> A;
    cout << "masukan angka kedua: ";
    cin >> B;
    hasil(perkalian(A,B));
    break;

    default:
        cout<<"anda salah menginput data yang sesuai";
    }
    
    return 0;
    
}