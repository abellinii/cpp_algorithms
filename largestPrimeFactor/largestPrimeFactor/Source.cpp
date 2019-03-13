#include <iostream>
//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?

//Originally tried brute force but it is redicolously slow and I didnt wit for the answer.

//Using the fundamental therom of arithmetic which states (Any integer greater than 1 is either a prime number, or can be written as a unique product of prime numbers).


int main() {
    

    const long numm = 600851475143;
    long newnumm = numm;
    long largestFact = 0;
    
    //Start at the smallest prime number
    int counter = 2;
    
    //Check the number is not higher than the possible prime value sqrt(num)
    while (counter * counter <= newnumm) {
        
        //Use factorisation to get all factors untill you reach the largest value. if it  can be divided and the remainder is 0 find the other value and continue until it reaches the highest.
        
        if (newnumm % counter == 0) {
            newnumm = newnumm / counter;
            largestFact = counter;
        } else {
            counter++;
        }
    }
    if (newnumm > largestFact) { // the remainder is a prime number
        largestFact = newnumm;
    }
    
    std::cout << largestFact;

    
	system("pause");
	return 0;


    }

