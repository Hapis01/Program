#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int A[3][3], B[3][3], C[3][3];
  int* pA, * pB, * pC;
  int i, j, k;

  // Inisialisasi matriks A
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      cout << "Masukkan nilai matriks A [" << i << "][" << j << "]: ";
      cin >> A[i][j];
    }
  }

  // Inisialisasi matriks B
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      cout << "Masukkan nilai matriks B [" << i << "][" << j << "]: ";
      cin >> B[i][j];
    }
  }


  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 3; k++) {
        pC[i * 3 + j] += pA[i * 3 + k] * pB[k * 3 + j];
      }
    }
  }

  // Tampilkan hasil perkalian
  cout << "Hasil perkalian matriks A dan B:" << endl;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      cout << pC[i * 3 + j] << " ";
    }
    cout << endl;
  }

  return 0;
}
