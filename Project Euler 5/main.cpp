#include <iostream>

using namespace std;

int main()
{
    int x = 232791000;
    int z;
    int y;
    int p = 0;
    int reach20check =0;

        do{

            y=1;

            do{

                z= x%y;

                y++;


               if(z>0){
                    y=25;
                }


                if(y==21){
                    y=25;
                    reach20check = 1;
                }

            } while(y<22) ;

            cout<< x <<endl;

            x = x+20;

        } while(reach20check==0);

    return 0;
}
