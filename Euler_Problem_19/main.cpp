#include<iostream>

using namespace std;

int name=1, counter=0;

string day_name[7] = {"Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday","Monday"};

string day_of_week(int x);

int main(){



	for (int year = 1901; year<=2000; year++){

		for(int month = 1;month<=12;month++){

			if(month==9||
				month==4||
				month==6||
				month==11){

				for(int day =1;day<=30;day++){

					cout << day<<"/"<<month<<"/"<<year<<"    " << name<<"   "<<day_of_week(name)<<endl;


					if(name==7){
						name = 1;
					} else{
						name++;
					}

					if(name==6&&day==1){
						counter++;
					}


				}

			}else if(month==2){

				if(year%4==0 && (year%100!=0 || year%400==0)){

					for(int day = 1;day<=29;day++){

					cout << day<<"/"<<month<<"/"<<year<<"    " << name<<"   "<<day_of_week(name)<<endl;


					if(name==7){
						name = 1;
					} else{
						name++;
					}

					if(name==6&&day==1){
						counter++;
					}

					}

				}else{

					for(int day = 1;day<=28;day++){

					cout << day<<"/"<<month<<"/"<<year<<"    " << name<<"   "<<day_of_week(name)<<endl;


					if(name==7){
						name = 1;
					} else{
						name++;
					}
					if(name==6&&day==1){
						counter++;
					}

					}
				}

			}else {

				for(int day=1;day<=31;day++){

					cout << day<<"/"<<month<<"/"<<year<<"    " << name<<"   "<<day_of_week(name)<<endl;


					if(name==7){
						name = 1;
					} else{
						name++;
					}
					if(name==6&&day==1){
						counter++;
					}

				}
			}

		}



	}
	cout << counter;




	return 0;
}


string day_of_week(int x){

	int y = x-1;

	for(int i = 0; i< 7;i++){

		if(i==y){
			return day_name[i];
		}

	}

}