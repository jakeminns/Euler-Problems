//
//  main.cpp
//  Euler Problem 8
//
//  Created by Jake Minns.
//  Copyright © 2015 Jake Minns. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

string line;
string lines[20];
int counter=0;
char integer;
int i[1000], y=0;
 long long int sum, store = 0;

int main() {
    
    stringstream convert;
    
    ifstream file ("/Users/jakeminns/Documents/Euler Problem 8/Euler Problem 8/numbers.txt");
    if (file.is_open()){
        
        while(getline(file,line)){
            
            
            lines[counter] = line;
            
            for(int x =0; x<50; x++){
                
                
                convert.clear();
                convert << line[x];
                
                convert >> i[y];
                
          
                
                y++;
                
            }
     
            
            counter++;
            
            
        }
        
        
        for( int x = 0; x<988;x++){
            
            sum = 1;
            
            for( int y=0;y<13;y++){
                
                sum = sum * i[x+y];
                
                cout << i[y+x];
            }
            
            cout <<"      " << sum<<endl;
            
            if (sum > store) {
            
                store = sum;
                
                cout<< store<<endl;
            }
            
            
            
            
        }
        
        cout << store;
        
        
        
        
        
        
    }
    else {
        
        cout << "unable";
        
    }
    
    
    
    return 0;
}
