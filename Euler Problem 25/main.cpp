//
//  main.cpp
//  Euler Problem 25
//
//  Created by Jake Minns on 03/12/2015.
//  Copyright © 2015 Jake Minns. All rights reserved.
//

#include <iostream>
#include "BigIntegerLibrary.hh"
using namespace std;

int counts=3;
BigInteger fn=0, fn1=1, fn2=1;
int main() {

    
    while(fn/1000<1){
        
        
        fn = fn1 + fn2;
        fn2=fn1;
        fn1=fn;
        
        
        counts++;
        
    }
    
    
    return 0;
}
