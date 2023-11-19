#include <iostream>
int main() {
    int T;

    printf("Masukkan Nilai Suhu = -25 ");
    scanf("%d", &T);

    if (T <= 0) {
        printf("Kondisi Beku");
    } else if (T > 0 && T <= 100) {
        printf("Kondisi Cair");
    } else {
        printf("Kondisi Uap");
    }

    return 0;
}
