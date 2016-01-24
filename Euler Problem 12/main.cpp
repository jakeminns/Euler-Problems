#include <iostream>

using namespace std;

int main()
{

 int tri;
 int count = 0;
 int n=1;
 bool check = false;


while(check == false){

    count =0;

     if(n%2==0){

       tri = (n/2)*(n+1);



     }else{

        tri = n*((n/2)+1);

     }

     cout << tri <<endl;

     for(int y = 1; y<tri;y++){

        if(tri%y==0){

            cout << y << "   ";

            count++;

        }

        if(count>=500){

            cout << tri << "Done";
            y=tri;
            check = true;

        }

     }

     cout << endl;

     n++;

}

}
