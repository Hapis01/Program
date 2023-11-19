#include <iostream>

/**
*Menentukan Nilai Terbesar Dari 2 Inputan
*/
using namespace std;
int main(){
	int a,b;
	cout<<"Menentukan nilai terbesar 2 buah input \n";
	cout<<"Masukkan nilai 1: ";cin>>a;
	cout<<"Masukkan nilai 2: ";cin>>b;
	
	if (a>b)
		cout<<"Nilai terbesar :"<<a<<endl;
	else
		cout<<"Nilai terbesar :"<<b<<endl;
	
	return 0;
}
