#include <iostream>

using namespace std;

int twopound = 200, onepound = 100, fifty = 50, twenty = 20, ten = 10, five = 5, twop = 2, onep = 1;
int sum;
int counter =0;
int main(){

	for(int a =0; a<=200/twopound;a++){
		for(int b =0;b<=200/onepound;b++){
			for(int c =0;c<=200/fifty;c++){
				for(int d =0;d<=200/twenty;d++){
					for(int e =0;e<=200/ten;e++){
						for(int f = 0;f<=200/five;f++){
							for(int g=0;g<=200/twop;g++){
								for(int h=0;h<=200/onep;h++){

									sum = (a*twopound)+(b*onepound)+(c*fifty)+(d*twenty)+(e*ten)+(f*five)+(g*twop)+(h*onep);

									if(sum == 200){
										counter++;
									}

								}
							}
						}
					}
				}
			}
		}
	}

	cout << counter;
	return 0;
}