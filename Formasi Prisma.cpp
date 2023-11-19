#include<iostream>
int main() {
	for (int i = 0; i < 6; i++) {
		for (int k = 5; k > i; k--){
			std::cout << " ";
		}
		for (int j = 0; j < i * 2; j++) {
			std::cout << "*";
		}
		std::cout << "" << std::endl;
	}
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < i; k++) {
			std::cout << " ";
		}
		for (int j = 10; j > i * 2; j--) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	return 0;
}
