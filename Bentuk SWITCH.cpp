#include <iostream>
int main() {
    int nilai; 
    printf("Masukkan nilai : ");
    scanf("%d", &nilai);

    switch(nilai) {
        case 1: {
            printf("satu\n");
            break;
        }
        case 2: {
            printf("dua\n");
            break;
        }
        case 3: {
            printf("tiga\n");
            break;
        }
        default: {
            printf("tidak ada nilai\n");
            break;
        }
    }
    return 0;
}
