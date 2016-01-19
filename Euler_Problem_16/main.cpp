#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
#include <iomanip>
#include <math.h>       /* pow */


using boost::multiprecision::int1024_t;
using namespace std;

int1024_t Factorial(int num);
int1024_t power(int num, int pow);

int main()
{
	int1024_t num, holder, sum = 0;

	int1024_t big = Factorial(1000);

	//cout << big<< endl;

	for(int x = 1; x<=302; x++){
    
    num = big % power(10,x);

  

    
    big = big - num;


    holder = num / power(10,x-1);
	cout << holder << endl;



	



    sum = sum + holder;
    // cout << holder<<endl<<endl;

	}

    cout << sum;



}

int1024_t Factorial(int num)
{
    int1024_t fact = 2;
    for(int i=1; i<num; i++)
    {
        fact = fact *2;
    }
    return fact;
}

int1024_t power(int num, int pow){

	int1024_t ans =1;

	if(pow == 0){
		ans = 1;
	}else {

	for (int x = 1; x<=pow; x++){

		ans = ans * num;

	}

}

	return ans;

}