#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ifstream ifile("FILE.txt");
  int n;
  ifile >> n;
  int a[n];
  for (int i=0;i<n;i++){
    ifile >> a[i];
  }
  ifile.close();
  for (int j=n-1;j>=1;j--){
    for (int i=0;i<=j-1;i++){
      if (a[i]>a[i+1]){
        int tg=a[i];
        a[i]=a[i+1];
        a[i+1]=tg;
      }
    }
  }

  ofstream ofile;
  ofile.open("SORTED_FILE.txt");
  ofile << n << endl;
  for (int i=0;i<n;i++){
    ofile << a[i] << " ";
  }
  ofile << endl;
  ofile.close();
  return 0;
}
