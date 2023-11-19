#include <iostream>
using namespace std;

int main(){
    int i,j;
        for(i=1; i<=5; i++){
            cout<<" "<<endl;
            for(j=5; j>i; j--){
                cout<<"*";
            }
        }
    return 0;
}