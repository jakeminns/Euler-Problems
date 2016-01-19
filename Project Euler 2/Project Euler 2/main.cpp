//
//  main.cpp
//  Project Euler 2
//
//  Created by Jake Minns on 20/07/2015.
//  Copyright (c) 2015 Jake Minns. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int n = 1; //Variable n in series
    int n_1 = 0; //Variable n-1 in series
    int count = 0; //Variable to count even numbers of sequence
    int holder =0; //Place holder variable holding n-1 value
    
    for(int x = 0; x<100;x++){ //loop to run series
      
        if(n<4000000){ //Check n value is below 4,000,000
            if(n%2==0){ //If n value is even remainder will be 0, n value is to be added to count
                count += n; //Add n value to count
            }
        
            holder = n; //Hold curren n value
            n = n + n_1; //Add n to n-1 value
            n_1 = holder; //assign n-1 value to holder
            
       
        }else{
            cout << "Answer = "<< count<< endl; //Output Answer
            return 0; //End Program
        }
        
    }
    
    

}
