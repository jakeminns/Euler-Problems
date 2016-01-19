#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
#include <iomanip>
#include <math.h>  
using boost::multiprecision::cpp_int;

using namespace std;
cpp_int power(int num, int pow);
vector<cpp_int> terms;
cpp_int square;
bool check;
int main() {

	for(int a=2;a<=100;a++){

		for(int b = 2;b<=100;b++){

			square = power(a,b);

					cout << a<<"   " << b<<"   "<< square<<endl;


			check = false;

			for(int i = 0;i<terms.size();i++){

				if(square==terms[i]){
					check = true;
				}

			}

			if(check==false){
				terms.push_back(square);
			}

			square = 0;

		}
	}

	cout << terms.size();

	return 0;
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