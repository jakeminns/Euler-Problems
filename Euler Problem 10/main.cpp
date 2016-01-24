#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int count =1;
int count_print =1;


int  long long maxNum = 2000000;
int  long long sum=0;

vector<int > n(maxNum);


int main()
{
    for(int  x = 2; x<maxNum;x++){


        bool check = false;

        for(int y = 2; y<x;y++){

            if(x%y == 0){

                check = true;
                y = x;

            }


        }

            if (check==false){

                n[count]=x;

                count++;

            }


        }



ofstream myfile;
  myfile.open ("example.txt");

     for(int x = 0; x<count;x++){

        sum = sum +n[x];
        myfile <<count_print<< "    " <<n[x]<< "    "<<  sum << endl;
        count_print++;
    }




myfile.close();
    return 0;
}
