

//Smallest multiple

//Problem 5

//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?


#include <iostream>


int main() {
	//Start from the highest multiple to increase efficiency
	int num= 20;
	
	
	//loop through and increase the number by the highest multiple each time
	//Check from the highest and if it is divisible
	//If it is decrement.If not increase number again
	//If it reaches one give result;

	for (size_t i = 20; i != 0; num += 20) {
		while ( i != 0) {


			if (num % i == 0) {
				if (i == 1) {
					std::cout << "The result is : " << num << std::endl;
				}
				i--;

				
			}
			else {
				i = 20;
				break;
			}
	
		}
		
	}
	



	system("pause");
	return 0;
}