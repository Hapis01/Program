#include<iostream>

using namespace std;

int main(){
    int a,b;

    cout << "Masukan bilangan (a): ";
    cin >> a;
    cout << "Masukan bilangan (b): ";
    cin >> b;
    

    while (b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    

    cout << "Nilai FPB adalah: "<< a << endl; 
    return 0;
}