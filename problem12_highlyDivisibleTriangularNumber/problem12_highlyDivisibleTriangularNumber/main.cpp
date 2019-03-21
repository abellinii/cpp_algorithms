//
//  main.cpp
//  problem12_highlyDivisibleTriangularNumber
//
//  Created by wade abel on 19/3/19.
//  Copyright © 2019 wade abel. All rights reserved.
//

#include <iostream>
#include <cmath>

int factorization(long long n);
long long triangular(long long n);

int main(int argc, const char * argv[]) {
    long long num = 2;
    int factors = 0;
    
    while(factors != 500){
        
        if(factors < 500){
            num *= 2;
            factors = factorization(triangular(num));
            
        }else if(factors > 500){
            num -= (num/3);
            
            factors = factorization(triangular(num));
        }
        
        
    }
    
    
    std::cout << "The awnser is : " << num << std::endl;
    
    return 0;
}







long long triangular(long long n){
    return (n *(n + 1))/2;
}




int factorization(long long n){
    int factor = 1;
    int count = 0;
    long long newNum = n;
    while(factor  * factor <= std::sqrt(newNum)){
        
        if(n % factor == 0){
            newNum = newNum /factor;
            count+=2;
        }
        
        factor++;
        
    }
    
    return count;
    
}
