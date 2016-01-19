//
//  main.cpp
//  Euler Problem 24
//
//  Created by Jake Minns on 29/11/2015.
//  Copyright © 2015 Jake Minns. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;


int fact(int x ) {
    
    int ans=1;
    
    for (int y = x;y>0;y=y-1){
        
        ans = ans*y;
        
        
    }
    
    return ans;
    
}

int main(int argc, const char * argv[]) {
    
    
    int num = 1000000;
    int fac;
    int div, aval_store;
    int unit_count=0;
    vector<int> aval;
    vector<int> unit;
    int final = 0;
    
    for (int z = 0;z<10;z++){
        aval.push_back(z);
        
    }
    
    
    
    for(int x = 9; x>=0; x=x-1){
        
        fac = fact(x);
        aval_store = num;
        
        div = num/fac;
        num = num - fac*div;
        
        if(num == 0){
            
            if(aval.size()!=1){
            
            final = aval_store/fact(aval.size()-1);
            
            unit.push_back(aval[final-1]);
            
            aval.erase(aval.begin()+final-1);
            
            
            num = final;
        
                
            }else{
                unit.push_back(aval[0]);
                
                aval.erase(aval.begin());            }
            
            
        }else{

        unit.push_back(aval[div]);
        
        aval.erase(aval.begin()+div);

        unit_count++;
            

        }
        
    }
    
    
    for(int z = 0;z<unit.size();z++){
        cout << unit[z];
    }
    
    return 0;
}

