#include <iostream>
#include <cmath>


//Summation of primes

//Problem 10
//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

//Find the sum of all the primes below two million.





void isPrime(int n);


int main() {

	isPrime(2000000);

	system("pause");
	return 0;
}










//iterate through all numbers from 3. Check if they are prime. If the are add them to sum if not
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
