#include <iostream>


// 10001st prime

// Problem 7
// By listing the first six prime numbers : 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

// What is the 10 001st prime number ?







int isPrime(int n);








// Start at the first prime and check every number is it is a prime increment count. Once we reach the desired prime print it.
int main() {
	int count = 0;
	int prime;
	for (prime = 2; count < 10002; prime++) {
		if (isPrime(prime)) {

			count++;
			if (count == 10001) {
				std::cout << "The awnser is : " << prime << std::endl;
			}
		}

	}

	

	system("pause");
	return 0;
}











// Return true if a number is prime 
int isPrime(int n) {

	for (size_t i = 2; i < n; i++) {

		if (n % i == 0) {

			return false;
		}

	}

	return true;






}