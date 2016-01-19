#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int letter_score(string name1, int s);

	string names_text;
	string name;
	vector<string> names;
	char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};


int main(){



	ifstream file ("/Users/jakeminns/Documents/Euler_Problem_22/names.txt");
	if (file.is_open()){

		while (getline (file,names_text)){

		}

		file.close();
	} else {
		cout << "Can't find file";
	}

	for(int i =0; i<names_text.size();i++){

		if(names_text[i]=='"'){

			i++;
			name.clear();

			while(names_text[i]!='"'){

				name.push_back(names_text[i]);
				i++;
			}
			i++;
			names.push_back(name);
		}

	}

	cout << names.size()<< endl;

	for(int j = 0; j < names.size();j++){

	cout <<j<<"    "<< names[j]<<endl;

	}

	string holder;

	bool end = true;

	int a_pos,b_pos;


	while(end == true){

	end = false;

	for(int i=0; i<names.size()-1;i++){
	bool check = false;
 
	a_pos = letter_score(names[i],0);
	b_pos = letter_score(names[i+1],0);
	

	if(a_pos>b_pos){

		holder = names[i];
		names[i] = names[i+1];
		names[i+1] = holder;

		holder.clear();

		end = true;

	} else if (a_pos==b_pos){

	check = false;

	int n = 1;


	while(check == false|| n< names[i].size()-1){

		if (a_pos == b_pos) {



		a_pos = letter_score(names[i],n);
		b_pos = letter_score(names[i+1],n);

		if(a_pos>b_pos){

			holder = names[i];
			names[i] = names[i+1];
			names[i+1] = holder;

			holder.clear();

			end= true;

		}

	}else {
		check = true;
	}

	n++;

	}

}
}
}


	cout << names[0]<<endl;









	int name2,name3;
	long int v;

	long int name_score, sum =0;

	for(int x = 0;x<names.size();x++){

		name_score=0;

		for(int y =0; y<names[x].size(); y++){

			name_score=name_score + letter_score(names[x],y);

		}
		v = x+1;

		sum = sum + (name_score*v);

		cout << x<<"    "<<names[x]<<"    " << name_score<<"    "<<name_score*(v)<< "    "<<sum<<endl;
	
	}


	return 0;
}



int letter_score(string name1, int s){

	int a_pos = 0;

	if(s<name1.size()){

	for(int x =0; x<27; x++){

				if(name1[s]==alpha[x]){

					a_pos = x+1;
					
				}			

	}
}

	return a_pos;
}




