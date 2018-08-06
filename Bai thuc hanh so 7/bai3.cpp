#include <iostream>
#include <fstream>

using namespace std;

void create(string filename){
  int n,m;
  cout << "Nhap n: ";
  cin >> n;
  cout << "Nhap m: ";
  cin >> m;
  ofstream file("MATRIX.txt",ios::out);
  file << n << " " << m << endl;
  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
      cout << "Nhap a[" << i+1 << "," << j+1 << "]: ";
      int temp;
      cin >> temp;
      file << temp << " ";
    }
    file << endl;
  }
  file.close();
}

void read(string filename, int **&a, int &n, int &m){
  ifstream file(filename);
  file >> n >> m;
  a = new int*[n];
  for (int i=0;i<n;i++){
    a[i] = new int [m];
  }
  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
      file >> a[i][j];
    }
  }
  file.close();
}

void print(int **a, int n, int m){
  cout << "Mang hai chieu da nhap la: " << endl;
  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}

int main(){
  int n,m,**a;
  create("MATRIX.txt");
  read("MATRIX.txt",a,n,m);
  print(a,n,m);
  return 0;
}
