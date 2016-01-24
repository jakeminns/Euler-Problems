#include <iostream>
#include <fstream>
#include <string>     // std::string, std::stoi
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
  string line;
  int long long num = 0;
  ifstream myfile ("number.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {

 line.resize(17);
      num = num + atoll(line.c_str());


    }
    myfile.close();

cout << "answer:   " num;
  }
  else cout << "Unable to open file";

  return 0;

}
