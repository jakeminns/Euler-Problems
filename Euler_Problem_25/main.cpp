#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
#include <iomanip>
#include <math.h>       /* pow */


using boost::multiprecision::cpp_int;
using namespace std;

cpp_int Factorial(int num);
cpp_int power(int num, int pow);

int main()
{

cpp_int num_a=1;
cpp_int num_b =1;
cpp_int num_c=1;
cpp_int counter=2;


while((num_c % power(10,999)) == num_c){

num_c = num_b + num_a;

num_a = num_b;

num_b = num_c;

counter++;


}

cout << counter;

}


cpp_int power(int num, int pow){

	cpp_int ans =1;

	if(pow == 0){
		ans = 1;
	}else {

	for (int x = 1; x<=pow; x++){

		ans = ans * num;

	}

}

	return ans;

}