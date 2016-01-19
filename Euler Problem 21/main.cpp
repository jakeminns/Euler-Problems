//
//  main.cpp
//  Euler Problem 21
//
//  Created by Jake Minns on 19/12/2015.
//  Copyright © 2015 Jake Minns. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    int mod1, mod2;
    int sum1=0, sum2=0;
    int ami = 0;

    
   for(int num = 1; num < 10000; num++){

       sum1 = 0;
    for(int div = 1; div<(num/2)+2; div++){
        mod1 = num % div;
        
        if (mod1 == 0){
            sum1 = sum1 + div;
        }
        
        
    }
    
    sum2 = 0;
    
    for(int div=1; div<(sum1/2)+2; div ++){
        
        mod2 = sum1 % div;
        
        if (mod2 == 0 ){
          
            sum2 = sum2 + div;
            
        }
        
    }
    
    if (sum2 == num&& num != sum1&&num < 10000&& sum1 < 10000){
        ami=ami + num;
        cout << num << endl;
    }
  }
    
    cout << ami ;
    
    
    return 0;
}
