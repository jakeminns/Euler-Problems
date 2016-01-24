#include <iostream>

using namespace std;
int minRange=0;
int maxRange = 100;
int preSquare;
int postSquare;


int main()
{
    for(int x = minRange ; x<=maxRange; x++){
                preSquare = preSquare+x;
    }

    preSquare = preSquare*preSquare;
    cout << preSquare<<endl;

    for(int y=minRange; y<=maxRange; y++){
            int square = y*y;
        postSquare = postSquare + square;
    }

    cout<<postSquare<<endl;

    cout << preSquare - postSquare;

}
