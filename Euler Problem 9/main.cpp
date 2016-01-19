//
//  main.cpp
//  Euler Problem 9
//
//  Created by Jake Minns on 10/12/2015.
//  Copyright © 2015 Jake Minns. All rights reserved.
//

#include <iostream>
#include <math.h>      
using namespace std;


int main(int argc, const char * argv[]) {
 
    double c_2, c;
    
    for(double a = 1; a< 400;a++){
        
        for(double b = 1; b < 400; b++){
            
            c_2 = pow(a,2)+pow(b,2);
            c = sqrt(c_2);
            
            
            if (c > b && b > a) {
                
                if(c+b+a==1000){
                    cout << a*b*c;
                }
            }
            
        }
        
        
    }
    
    
    
    
    
    return 0;
}
