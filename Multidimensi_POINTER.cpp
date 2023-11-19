#include<iostream>

using namespace std;

int main(){
    int MAX[3][3];
    int* ptrMAX[3];

    for(int i = 0; i < 3; i++){
        ptrMAX[i] = MAX[i];
        for(int j = 0; j < 3; j++){
            ptrMAX[i][j] = i * 3 + j;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << MAX[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << ptrMAX[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}