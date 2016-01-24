#include <iostream>

using namespace std;

int main()
{
   double xgrid=20, ygrid=20;

    double totalpaths, top,xbottom=1, ybottom=1;




    for(double x =21;x<=40;x++){
        top = top*x;
    }
    cout << top <<endl;

        for(int z =1;z<=(ygrid);z++){
        ybottom = ybottom*z;
    }

    cout << ybottom<<endl;

    totalpaths = (top/ybottom);

    cout << totalpaths;
}
