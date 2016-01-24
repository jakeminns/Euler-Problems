#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int columncount = 0;
    int total;

    vector<int> innerSolu;

    vector<vector<int> > posSolu;


for(a=1; a<11; a++){


    for(b=1; b<11; b++){

        if(a!=b){

        for(c =1; c<11; c++){

                if(a!=b && b!=c){

                total = a + b + c;

                if(total == 14){

                    innerSolu.clear();

                    innerSolu.push_back(a);
                    innerSolu.push_back(b);
                    innerSolu.push_back(c);

                    posSolu.push_back(innerSolu);

                    columncount++;

                }
                }

        }

        }
    }
}

cout<< columncount<< endl;

bool repeatCheck = false;

for(int z=0; z<=columncount-1; z++) {

   for(int x=0; x<=columncount-1; x++) {

    if(posSolu[z][2]==posSolu[x][1]){

        for(int y=0; y<=columncount-1; y++){

          if(posSolu[x][2]==posSolu[y][1]){

                for(int g=0; g<=columncount-1; g++){

                    if(posSolu[y][2]==posSolu[g][1]){

                        for(int t=0; t<=columncount-1; t++){

                            if(posSolu[g][2]==posSolu[t][1]){

                                if(posSolu[t][2]==posSolu[z][1]){


                    repeatCheck = false;

                    for(int q = 0; q<2; q++){

                        for(int u = 0; u<3;u=u+2){

                            if(posSolu[z][q] == posSolu[x][u]||
                               posSolu[x][q]==posSolu[y][u] ||
                               posSolu[y][q]==posSolu[g][u] ||
                               posSolu[g][q]==posSolu[t][u] ||
                               posSolu[t][q]==posSolu[z][u]){

                                    repeatCheck = true;

                               }

                        }

                    }

                    for(int r = 0; r<3; r++){

                        for(int b = 0; b<3;b++){

                                if(posSolu[z][r] == posSolu[y][b]||
                               posSolu[z][r]==posSolu[g][b] ||
                               posSolu[x][r]==posSolu[t][b]||
                               posSolu[y][r]==posSolu[t][b]){
                                    repeatCheck=true;
                                }

                        }
                    }

                    if(posSolu[z][0] > posSolu[x][0]||
                       posSolu[z][0] > posSolu[y][0]||
                       posSolu[z][0] > posSolu[g][0]||
                       posSolu[z][0] > posSolu[t][0]){
                        repeatCheck = true;
                       }

                    for(int h= 0; h<2; h++){
                        for(int f=1;f< 3;f++){

                          if(posSolu[z][h] == posSolu[x][f]||
                               posSolu[x][h]==posSolu[y][f] ||
                               posSolu[y][h]==posSolu[g][f] ||
                                posSolu[g][h]==posSolu[t][f] ||
                               posSolu[t][h]==posSolu[z][f]){

                                    repeatCheck = true;

                               }

                        }
                    }

                     if(repeatCheck == false){

                       cout<<z<<"   " <<posSolu[z][0]<<posSolu[z][1]<<posSolu[z][2]<<"    "<<posSolu[x][0]<<posSolu[x][1]<<posSolu[x][2]<<"   "<<posSolu[y][0]<<posSolu[y][1]<<posSolu[y][2]<<"   "<<posSolu[g][0]<<posSolu[g][1]<<posSolu[g][2]<<"   "<<posSolu[t][0]<<posSolu[t][1]<<posSolu[t][2]<<endl;

                        }

                                }
                            }
                        }
        }
    }

   }

}

   }
}

}}
