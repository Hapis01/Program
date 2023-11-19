#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

int main() {


    int ukt = 5000000;
    int penghasilan;
    int tanggungan;
    string kerjaan;
    float uktakhir;

    cout << "Masukkan pekerjaan orang tua: ";
    cin >> kerjaan;

    if (kerjaan == "PNS" || kerjaan == "POLRI" || kerjaan == "TNI") {
        cout << "UKT Anda adalah: " << ukt << endl;
    } else {
        cout << "Masukkan penghasilan orang tua: ";
        cin >> penghasilan;

        cout << "Masukkan tanggungan orang tua: ";
        cin >> tanggungan;


        /*non pns tangunan lebih dari 2*/
        if (penghasilan <= 5000000 && tanggungan > 2) {
            float penghasilanakhir;
            penghasilanakhir = ukt - 3750000;
            uktakhir = penghasilanakhir - 500000;
            cout << "UKT Anda adalah: " <<setprecision(7)<< uktakhir << endl;
        }else if(penghasilan >=5100000 && penghasilan <=10000000 && tanggungan > 2){
            float penghasilanakhir;
            penghasilanakhir = ukt - 2500000;
            uktakhir = penghasilanakhir - 500000;
            cout << "UKT Anda adalah: " <<setprecision(7)<< uktakhir << endl;
        }else if(penghasilan > 10000000 && tanggungan > 2){
            cout<<"ukt anda adalah"<<ukt - 500000<<endl;

         /*non pns tangunan kurang dari 2*/

        }else if(penghasilan >=5100000 && penghasilan <=10000000 && tanggungan < 2){
            float penghasilanakhir;
            penghasilanakhir = ukt - 2500000;
            cout << "UKT Anda adalah: " <<setprecision(7)<< penghasilanakhir << endl;

        }else if(penghasilan > 10000000 && tanggungan < 2){
            cout<<"ukt anda adalah"<<ukt;

        }else if(penghasilan <= 5000000 && tanggungan < 2){
            float penghasilanakhir;
            penghasilanakhir = ukt - 3750000;
            cout << "UKT Anda adalah: " <<setprecision(7)<< penghasilanakhir << endl;
        }
        else{
            cout<<"input tidak valid";
        }
    }
    return 0;
}

