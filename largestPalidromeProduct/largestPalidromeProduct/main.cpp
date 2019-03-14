//
//  main.cpp
//  largestPalidromeProduct

//Problem 4

//A palindromic number reads the same both ways.The largest palindrome made from the product of two 2 - digit numbers is 9009 = 91 × 99.

//Find the largest palindrome made from the product of two 3 - digit numbers.

//  Created by wade abel on 13/3/19.
//  Copyright © 2019 wade abel. All rights reserved.
//

#include <iostream>
#include <cmath>


bool checkThree(int a);
bool check_palindrome(int n);


int main(int argc, const char * argv[]) {

	//initialise the flag to false until palindrome is found
	//Start from the highest possible number

    bool flag = false;
    int i = 999 * 999;
   
	//Check number is a palindrome. If not decrement and try again.
	//if it is divide it by all possible 3 digit numbers and see if the result is a three digit number.
	//If it meets all requirements and is a palindrome set flag to true, print result and jump out of the loop.

    while(flag == false){
		
        if(check_palindrome(i)){
			 
            if(checkThree(i)){
            
            flag = true;
            std::cout << "The number is : " << i << std::endl;
            }
        }
        i--;
    }
    
    return 0;
}


//intialise int to highest possible three digit number.
//loop through until lowest possible number
//Check to see if it is equal to a three digit real number. If it is return true.
//if not decrement
//If it is not the product of two three digit numbers return false.

bool checkThree(int a){
	
    int i = 999;
	
    while(i !=100){

        if((a/i) > 100 && (a/i) < 999 && double(a)/double(i) == floor((a/i)) ){
            return 1;
        }	
		i--;
    }
    
	
    return 0;
}


//intialise two variables. one to hold a temp value and one to hold the reversed number
//temp = inputed number
//while t is not 0
//find the last number
//add to front of reverse
//knock from temp
//Once complete check original vs reverse and if its a match its a palindrome

bool check_palindrome(int n) {

    int t, reverse = 0;
    t = n;
    

    while (t != 0) {
	
        reverse = reverse * 10;		
        reverse = reverse + t%10;		
        t = t/10;
    }
   
    if (n == reverse)
        return true;
    else
        return false;
}
