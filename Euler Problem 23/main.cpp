//
//  main.cpp
//  Euler Problem 21
//
//  Created by Jake Minns on 19/12/2015.
//  Copyright © 2015 Jake Minns. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    
    vector<long int> abun, number;
    int mod1;
  long  int sum1=0, sum2 = 0;
   long int counter = 0;
  long  int sum;
    
    
    for(int num = 1; num < 28123; num++){
        
        sum1 = 0;
        
        for(int div = 1; div<(num); div++){
            mod1 = num % div;
            
            if (mod1 == 0){
                sum1 = sum1 + div;
            }
            
            
        }
        
        if (sum1 > num) {
            abun.push_back(num);
            counter++;
        }
        
    }
    
    for(int r = 1; r<28124; r++){
        number.push_back(r);
    }
    



for(int x =0; x< counter; x++){
    
    cout << x<<endl;
    
    for(int y=x;y<counter;y++){
        
        sum2 = 0;
        
        sum2 = abun[x]+abun[y];
        
        
        if(sum2 <= 28123){
        number[sum2-1]=0;
        }
            
        
        
    }
    
}

    sum =0;
    
    for(int s =0; s< 28124;s++){
        sum = sum +number[s];
    }

cout << sum;
    
    return 0;
    
}
