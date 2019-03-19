#include <iostream>
#include <cmath>


void isPrime(int n);


int main() {

	

	isPrime(2000000);


	

	system("pause");
	return 0;
}


void isPrime(int n) {
	long long sum = 2;

	for (int i = 2; i != n; i++) {
		bool flag = 1;
		for (int j = 2; j < std::sqrt(i) + 1; j++) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
			
				
		
			
		}
		if (flag == 1) {
			sum += i;
		}

	}


	std::cout << "The awnser is : " << sum << std::endl;




}