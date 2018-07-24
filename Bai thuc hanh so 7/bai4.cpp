#include <iostream>
#include <fstream>

using namespace std;

int main(){
  int n;
  cout << "Nhap so phan tu cua mang: ";
  cin >> n;
  int a[n];
  for (int i=0;i<n;i++){
    cout << "Nhap phan tu thu " << i+1 << " cua mang: ";
    cin >> a[i];
  }
  ofstream ofile;
  ofile.open("DATHUC.txt");
  ofile << n << endl;
  for (int i=0;i<n;i++){
    ofile << a[i] << " ";
  }
  ofile << endl;
  for (int i=0;i<n;i++){
    ofile << a[i] << " x " << i;
    if (i!=n-1){
      ofile << " + ";
    }
    else ofile << "." << endl;
  }
  ofile.close();

  ifstream ifile("DATHUC.txt");
  string s;
  while (getline(ifile,s)){
    cout << s << endl;
  }
  ifile.close();
  return 0;
}
