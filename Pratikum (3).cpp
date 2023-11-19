#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float a,b,c;
    float D,x1,x2;

    cout << "Masukan Nilai a: ";
    cin >> a;
    cout << "Masukan Nilai b: ";
    cin >> b;
	cout << "Masukan Nilai c: ";
    cin >> c;

    if (a != 0 )
    {
        D = b*b-4*a*c;
        if (D>0) {
            cout << ("Akar Real");
            x1=(-b+sqrt(D))/(2*a);
            x2=(-b-sqrt(D))/(2*a);
            cout << x1 << endl;
            cout << x2;
        }
        
		else if(D == 0){
            cout << ("Akar Kembar");
            x1=(-b)/(2*a);
            cout << x1;
        }
        else 
        {
            cout << ("Akar Imager");
        }
    }
	
		else {
        cout << "Koefisien 'a' Tidak boleh sama dengan 0." << endl;
        }
  		return 0;  
}