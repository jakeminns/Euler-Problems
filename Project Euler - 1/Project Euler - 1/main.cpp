//
//  main.cpp
//  Project Euler - 1
//
//  Created by Jake Minns on 20/07/2015.
//  Copyright (c) 2015 Jake Minns. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {
    
    int sum = 0 ;
    
    for (int count = 0; count<1000;count++)
    {
        
        if((count%5) == 0 || (count%3)==0)
        {
            
            sum += count;
        }
        

    }
    
    
    cout << sum;

}
