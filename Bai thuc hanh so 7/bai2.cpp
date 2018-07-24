#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ofstream ofile1,ofile2;
  ofile1.open("FILE1.txt");
  ofile1 << "7 2\n1 2 3 1\n2 2 4 1\n3 3 5 1\n";
  ofile1.close();
  ofile2.open("FILE2.txt");
  ofile2 << "4 1 1 2\n5 2 2 2\n6 3 3 2\n7 4 4 2\n";
  ofile2.close();
  ifstream ifile1("FILE1.txt");
  ifstream ifile2("FILE2.txt");
  ofstream ofile3("FILE3.txt");
  ofile3 << ifile1.rdbuf() << ifile2.rdbuf();
  ifile1.close();
  ifile2.close();
  ofile3.close();
  ifstream ifile3("FILE3.txt");
  string s;
  while (getline(ifile3,s)){
    cout << s << endl;
  }
  ifile3.close();
  return 0;
}
