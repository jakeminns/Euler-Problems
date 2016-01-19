#include <boost/multiprecision/cpp_int.hpp>

#include <iostream>
#include <math.h>       /* pow */


using boost::multiprecision::cpp_int;



using namespace std;

int main() {

	cpp_int corner = 1, corner_steps;
	cpp_int counter = 1;
	cpp_int x = 8;
	cpp_int y = 0;

	while(y<500){

		corner_steps = x/4;

		for(int i = 0; i<4; i++){

		corner =  corner + corner_steps; 

		counter = counter + corner;

		cout << corner << endl;

		}
	x=x+8;
	y++;
}

cout << counter;

	return 0;
}