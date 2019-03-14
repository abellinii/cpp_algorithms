//
//  main.cpp
//  largestPalidromeProduct
//
//  Created by wade abel on 13/3/19.
//  Copyright © 2019 wade abel. All rights reserved.
//

#include <iostream>
#include <cmath>


bool checkThree(int a);
bool check_palindrome(int n);
int main(int argc, const char * argv[]) {
    bool flag = false;
    int i = 999 * 999;
   
   
    
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

bool checkThree(int a){
    int i = 999;
    while(i !=100){
        i--;
        if((a/i) > 100 && (a/i) == floor((a/i)) ){
            return 1;
        }
        
    }
    
    return 0;
}


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
