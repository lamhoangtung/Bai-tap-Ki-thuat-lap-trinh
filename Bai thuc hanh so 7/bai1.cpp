#include <iostream>
#include <fstream>

using namespace std;

void writeFile(string filename){
  ofstream file(filename, ios::out);
  file << "Probleam name: exp1" << endl;
  file << "Maximize" << endl;
  file << "obj:\t\t\t x1 + 2 x2 + 3 x3 + x4" << endl;
  file << "Subject To" << endl;
  file << "\t c1: x2 - 3.5 x4 = 0" << endl;
  file << "Bounds" << endl;
  file << "\t 0 <= x1 <= 40" << endl;
  file << "General" << endl;
  file << "\t x4" << endl;
  file << "End";
  file.close();
}

void readFile(string filename){
  ifstream file(filename);
  string s;
  while (getline(file,s)){
    cout << s << endl;
  }
  file.close();
}

int main(){
  writeFile("FIRSTFILE.txt");
  readFile("FIRSTFILE.txt");
  return 0;
}
