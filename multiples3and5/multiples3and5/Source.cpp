


//Question

//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.


#include <iostream>
#include <vector>

int threeAndFive();

int main() {





	std::cout << threeAndFive();


	system("pause");
	return 0;
}




int threeAndFive() {
	
	int total = 0;
	
	

	// Loop through multiples of 5
	for (size_t i = 0; i < 1000; i += 5) {
		
		//If it is not also a multiple of 3 add to total
		if (i % 3 != 0) {
			total += i;
		}
		}

	//Loop through multiples of 3 and add to total
	for (size_t i = 0; i < 1000; i += 3) {


		total += i;

	}



	return total;





}