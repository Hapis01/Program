#include <iostream>
using namespace std;

int main(){
        const int nmaks = 20;
        int nilaiangka[nmaks];
        char nilaihuruf[nmaks];
        int i;

        for(i=1; i<=nmaks; i++){
            cout<<"masukkan nilai mahasiswa ke "<<i<<": ";
            cin>>nilaiangka[i];
        }

        for(i=1; i<=nmaks; i++){
            if(nilaiangka[i] >85 && nilaiangka[i] <= 100){
                nilaihuruf[i] = 'A';
                cout<<"nilai Mahasiswa ke "<<i<<" adalah "<<nilaihuruf[i]<<endl; 
            }
            if(nilaiangka[i] >70 && nilaiangka[i] <= 85){
                nilaihuruf[i] = 'B';
                cout<<"nilai Mahasiswa ke "<<i<<" adalah "<<nilaihuruf[i]<<endl; 
            }
            if(nilaiangka[i] >55 && nilaiangka[i] <=70){
                nilaihuruf[i] = 'C';
                cout<<"nilai Mahasiswa ke "<<i<<" adalah "<<nilaihuruf[i]<<endl; 
            }
            if(nilaiangka[i] >45 && nilaiangka[i] <= 55){
                nilaihuruf[i] = 'D';
                cout<<"nilai Mahasiswa ke "<<i<<" adalah "<<nilaihuruf[i]<<endl; 
            }
            if(nilaiangka[i] < 45){
                nilaihuruf[i] = 'E';
                cout<<"nilai Mahasiswa ke "<<i<<" adalah "<<nilaihuruf[i]<<endl; 
            }
        }

    return 0;
}