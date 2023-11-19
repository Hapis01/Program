#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double sudut;

    cout << "Masukan besaran sudut: ";
    cin >> sudut;

    double sinus = sin(sudut);
    double cosinus = cos(sudut);
    double tangen = tan(sudut);

    cout << "Sudut sinus: " << sinus << endl;
    cout << "Sudut cosinus: " << cosinus << endl;
    cout << "Sudut tangen: " << tangen << endl;

    return 0;
}