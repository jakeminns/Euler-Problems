//
//  main.cpp
//  Euler Problem 4
//
//  Created by Jake Minns on 21/07/2015.
//  Copyright (c) 2015 Jake Minns. All rights reserved.
//

#include <iostream>
#include <sstream>
using namespace std;

int total_int;
string total_string;
ostringstream convert;

int main() {

    for(int x = 999;x>=100;x = x-1){
        
        for(int y= 999;y>=100;y=y-1){
            
            
            
            total_int = x*y;
            
            total_string ='a';
            convert << total_int;
            total_string = convert.str();
            
            cout << x << "  *   " << y<< "   =   " << total_string << endl;
            
            
        }
        
        
    }
    
    
}
