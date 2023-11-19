#include<iostream>

using namespace std;

int KPK(int m, int n){
    int max = (m > n) ? m : n;

    while(true){
        if(max % m == 0 && max % n == 0){
            return max;
        }
        max++;
    }
}

int main (){
    int m, n;
    
    cout << "Masukan bilangan (m): ";
    cin >> m;
    cout << "Masukan bilangan (n): ";
    cin >> n;

    int kpk = KPK (m,n);

    cout << "KPK: " << kpk << endl;

    return 0; 
}