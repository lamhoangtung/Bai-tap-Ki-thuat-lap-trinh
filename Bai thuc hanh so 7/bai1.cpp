#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ifstream InputFile("FIRSTFILE.txt");
  string s;
  while (getline(InputFile,s)){
    cout << s << endl;
  }
  InputFile.close();
  return 0;
}
