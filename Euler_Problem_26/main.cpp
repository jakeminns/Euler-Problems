#include <boost/multiprecision/cpp_int.hpp>

#include <iostream>
#include <limits>
#include <iomanip>
#include <math.h>       /* pow */
#include <string>


using boost::multiprecision::cpp_int;



using namespace std;

cpp_int frac, one =1;
int main() {


for(int i = 1;i<500;i++){
	one = one*10;
}
for(cpp_int x =2;x<=1000;x++){

	frac = one/x;


	cout << x<<"    "<< frac << endl;
}



	return 0;
}