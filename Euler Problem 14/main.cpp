#include <iostream>

using namespace std;

int main()
{
    int long long step= 1;
   int long long  million = 1000000;
   int long long  startnum;
   int long long  countstore=0;
   int long long  numstore;
   bool check;
   int long long  n;

   for(int y = 3; y<=million; y=y+2){


    n=y;
    startnum = n;
    check=false;

    step = 0;
    cout << n<< "    ";

    while(check==false){

        if(n==1){
            check=true;
            if(step>countstore){
                numstore = startnum;
                countstore = step;
            }
        }else{

        if(n%2 == 0){

            n=n/2;
            step++;

        }else{

            n=(n*3)+1;
            step++;

        }
        }

    }


cout<< startnum << "   "<< step<< endl;

   }
   cout << numstore;


}
