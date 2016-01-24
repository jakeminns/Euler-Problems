#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
int count =1;

int maxNum = 200000;

vector<int> n(maxNum);


int main()
{
    for(int x = 2; x<maxNum;x++){

        n[x]=x;

    }

    for(int y =2; y<maxNum;y++){

        for(int x = 0; x<maxNum;x++){

            if(n[x]!=y){

            if(x%y == 0){
                n[x] = 0;

            }

            }

        }
    }


ofstream myfile;
  myfile.open ("example.txt");

     for(int x = 0; x<maxNum;x++){

            if (n[x]!=0){
        myfile <<count<< "    " <<n[x]<< endl;
        count++;
    }

        if (count == 10002){
            x = maxNum+1;
        }

     }
myfile.close();
    return 0;
}
