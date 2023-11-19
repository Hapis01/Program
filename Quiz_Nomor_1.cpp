#include <iostream>
using namespace std;
int main ()
{
    int angka;
    cout<<"masukkan angka 1 - 10 = ";
    cin>>angka;

    if(angka >= 1 && angka <=10 ){
        cout << "Valid number: " << angka << endl;
    }
    else{
        cout<<"Number invalid" << endl;
    }
    return 0;
}