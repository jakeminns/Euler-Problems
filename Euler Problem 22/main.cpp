#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string text, name;
    ifstream names ("names.txt");
    int str_size,y, end_name, z;
    int name_count=0;
    char character1, character2;


    if (names.is_open()){

        getline (names,text);

        str_size = text.size();

         vector<string> name_vec;

        for(int x =0; x<str_size;x++){

            character1 = text[x];

            if(character1 =='"'){

                for(int i=1;i<=20;i++){

                    character2=text[x+i];

                        if(character2=='"'){

                            end_name=x+i;

                          i = str_size+1;
                        }


                }

                z=0;

                if(text[x+1]!=','){

                for(int i = x+1; i<end_name;i++){

                    name_vec[name_count][z] = text[i];


                    z++;


                }


                }

            name_count++;

            }
        }

        cout << "done"<<endl;

        for(int x=0;x<name_count;x++){

            cout << name_vec[x][0]<<endl;
        }










    names.close();
    }

    return 0;

}
