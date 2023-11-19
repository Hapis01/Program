#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f;
	e=0;
	
	for(int i=1; i<=4; i++ ){
		cout<<"Masukkan nilai a"<<i<<"= ";
		cin>>a;
		cout<<"Masukkan nilai b"<<i<<"= ";
		cin>>b;
		cout<<"Masukkan nilai c"<<i<<"= ";
		cin>>c;
		
		d=a+b+c/3;
		cout<<"Rata-rata setiap input bilangan" << d <<endl;
		e=d+e;
		
	}
		f=e/4;
		cout<<"Jumlah rata-rata seluruh bilangan adalah "<<f;
	return 0;
}