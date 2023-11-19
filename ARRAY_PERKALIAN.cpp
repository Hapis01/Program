#include<iostream>

using namespace std;

int main(){
   int A [3][3];
   int B [3][3];
   int C [3][3];

   for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        cout << "Masukan nilai matriks A [" << i << "][" << j << "]: ";
        cin >> A[i][j];
    }
   }

   for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        cout << "Masukan nilai matriks B [" << i << "][" << j << "]: ";
        cin >> B[i][j];
    }
   }
   
   for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        for(int k = 0; k < 3; k++){
        C[i][j] += A[i][k] * B[k][j];
        } 
    }
   }

   cout << "Hasil penjumlahan kedua matriks: "<< endl;
   for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        cout << C[i][j] << " ";
    }
    cout << endl;
   }

    return 0;
}