//The sum of the squares of the first ten natural numbers is,  2 + (2)2 + ... + (10)2 = 385
//The square of the sum of the first ten natural numbers is,    (1 + 2 + ... + 10)2 = (55)2 = 3025
//Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.


#include <iostream>
#include <cmath>




int main() {

	long long int squared = 0;
	long long int notSquared = 0;

	//Loop through and get both values
	for (size_t i = 0; i < 101; i++) {
		squared += std::pow(i, 2);
		notSquared += i;
	}

	//Find the difference and print result
	notSquared = std::pow(notSquared, 2) - squared;
	std::cout << "The result is : " << notSquared << std::endl;








	system("pause");
	return 0;
}