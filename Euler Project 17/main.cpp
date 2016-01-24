#include <iostream>
#include <fstream>

using namespace std;



int main()
{
    int n_initial, div_huns =100, div_tens =10, tens, huns, tens_unit, tens_tens, unit,  huns_unit, count = 0;

int con=0;


    ofstream myfile;

    myfile.open ("result.txt");


    for(n_initial=1; n_initial < 1000; n_initial++){
con=0;

    tens = n_initial%div_huns;

    huns = n_initial - tens;

    huns_unit = huns/div_huns;

    cout << huns_unit;



    if(huns_unit !=0){
        count = count+3;
        con=con+3;
    }


    if(huns_unit == 1 ||
       huns_unit == 2 ||
       huns_unit == 6
       ){

        count = count+10;

        con = con+10;

       }
       else if(huns_unit == 4 ||
               huns_unit == 5 ||
               huns_unit == 9
        ) {
        count = count +11;
        con = con+11;
       }
       else if(huns_unit == 3 ||
               huns_unit == 7 ||
               huns_unit == 8

        ){

            count = count+12;
                    con = con+12;
        }

    unit = tens%div_tens;

    tens_tens = tens-unit;

    tens_unit = tens_tens/div_tens;

    cout << tens_unit;



        if(tens_unit == 4 ||
       tens_unit == 5 ||
       tens_unit == 6
       ){

        count = count+5;
                con = con+5;

       }
       else if(tens_unit == 8 ||
               tens_unit == 3 ||
               tens_unit == 2 ||
        tens_unit == 9
        ) {
        count = count +6;
        con = con+6;
       }
       else if(tens_unit == 7){

            count = count+7;
                    con = con+7;
        }

        if(tens_unit == 1){




                        if(unit == 1 ||
                       unit == 2
                       ){

                        count = count+6;
                                con = con+6;

                       }
                       else if(unit == 5 ||
                               unit == 6
                        ) {
                        count = count +7;
                                con = con+7;

                       }
                       else if(unit == 3 ||
                               unit == 4 ||
                               unit == 8 ||
                               unit == 9){

                            count = count+8;
                                    con = con+8;
                        }
                        else if(unit == 7 ||
                               unit == 6
                        ) {
                        count = count +9;
                                con = con+9;

                       }
                       else if (unit == 0 ){
                        con=con+3;
                        count=count+3;
                       }




        }

        if(tens_unit!=1 ){


        if(unit==0&& huns_unit!=0&&tens_unit==0){
                con=con-3;
        count=count-3;
            myfile<<"++++++";
        }

            if(unit == 1 ||
       unit == 2 ||
       unit == 6
       ){

        count = count+3;
                con = con+3;

       }
       else if(unit == 4 ||
               unit == 5 ||
               unit == 9
        ) {
        count = count +4;
                con = con+4;

       }
       else if(unit == 3 ||
               unit == 7 ||
               unit == 8

        ){

            count = count+5;
                    con = con+5;
        }
        }

        if(n_initial==9||
           n_initial==19||
           n_initial==99||
           n_initial==999
           ){
            myfile << "                      "<< count;
           }

    cout << unit<<"             " << count << endl;

myfile << huns_unit<<tens_unit<<unit<< "   "<< con<<endl;
    }

    cout<<" count   "<< count+11;
}
