#include <iostream>
#include <math.h>

using namespace std;

int main()
{

long long int n =   600851475143;
int half_n = (n-1)/2;
int y;
int x = 2;
int largestPrime;

do{

  y = n%x;

  if (y==0){

    n = n/x;

    cout <<n <<"    "<< "Prime    "<< x << "------------"<< endl;

    largestPrime = x;

    x=1;

  }

x++;

}while(n>1);

    cout << "Largest Prime     "<< largestPrime<< endl;


return 0;
}
