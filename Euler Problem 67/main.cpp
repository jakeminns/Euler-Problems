//
//  main.cpp
//  Euler Problem 18
//
//  Created by Jake Minns on 08/12/2015.
//  Copyright © 2015 Jake Minns. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>


using namespace std;

int main(int argc, const char * argv[]) {
    
    long long int triangle [100][100], counter=0;
    string line;
    
    ifstream file ("/Users/jakeminns/Documents/Euler Problem 67/Euler Problem 67/triangle.txt");
    
    stringstream convert;

    
    while(!file.eof()){
        
        
        for(int x =0; x<100; x++){
            
            for(int p = 0;p<x+1;p++){
            
                file >> triangle[x][p];
        
            }
            
        }
        
        
       
        
        
    }
    
    

    
    
    
    long long int calc1, calc2;
    
    for(int y = 99; y > 0; y = y-1){
        
        for(int x = 0; x <y;x++){
            
            calc1 = triangle[y-1][x]+triangle[y][x];
            
            calc2 = triangle[y-1][x]+triangle[y][x+1];
            if (calc1>calc2) {
                triangle[y-1][x] = calc1;
            }else{
                triangle[y-1][x] = calc2;
            }
            
            
        }
        
    }

    
        for(int z = 0;z<100;z++){
            for(int r = 0;r <100;r++){
                cout << triangle[z][r] << "    ";
            }
            
            cout << endl;
        }
        
        cout << endl;
    
    
    
    
    return 0;
}
