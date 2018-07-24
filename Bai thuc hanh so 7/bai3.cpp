#include <iostream>
#include <fstream>

using namespace std;

int main(){
  int n,m;
  cout << "Nhap n: ";
  cin >> n;
  cout << "Nhap m: ";
  cin >> m;
  ofstream ofile;
  ofile.open("MATRIX.txt");
  ofile << n << " " << m << endl;
  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
      cout << "Nhap a[" << i+1 << "," << j+1 << "]: ";
      int temp;
      cin >> temp;
      ofile << temp << " ";
    }
    ofile << endl;
  }
  ofile.close();

  int a[1000][1000];
  ifstream ifile("MATRIX.txt");
  ifile >> n >> m;
  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
      ifile >> a[i][j];
    }
  }
  cout << "Mang hai chieu da nhap la: " << endl;
  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
