#include <iostream>
using namespace std;
int main(){
    int A,B,C,D;
    D=0;

    
    for(int i=0; i<5; i++){
        cout<<"Masukkan Nilai A = ";
        cin>>A;
        cout<<"Masukkan Nilai B = ";
        cin>>B;
        
        C=A+B;
        D=D+C;
    
    }
        cout<<"Jumlahnya adalah = "<<D;

    return 0;
}