//
//  main.cpp
//  problem9_specialPythagoreanTriplet
//
//  Created by wade abel on 18/3/19.
//  Copyright © 2019 wade abel. All rights reserved.
//

#include <iostream>


//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which, a2 + b2 = c2
//For example, 32 + 42 = 9 + 16 = 25 = 52.

//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.



void checkThree (int n);

int main(int argc, const char * argv[]) {
    
    checkThree(1000);
    
    system("pause");
    return 0;
}


//Loop through an integer (i) incrementing from one until it is one third of the wanted sum (n).

//Inside the loop start another integer (j) one above the the previous (i) and increment to one half of the wanted sum (n).

//At each iteration of j create a new variable (a) = n - j+i

//If it is a pythagorean triplet return the product and break


void checkThree (int n){

    for(int i = 1; i < n / 3; i++){
        
        for(int j = i + 1; j < n / 2; j++){
            
            int a = n - (i + j);
            
            if(i*i + j*j == a*a){
                
                std::cout << "The awnser is : " << (i*j*a) <<std::endl;
                return;
                
            }
            
        }
    
    }
    
}
