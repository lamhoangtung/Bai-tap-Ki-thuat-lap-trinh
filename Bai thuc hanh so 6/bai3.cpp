#include <iostream>
#include <string>

using namespace std;

int main(){
  string s;
  cout << "Nhap xau ki tu: ";
  getline(cin,s);
  char c;
  cout << "Nhap ki tu c: ";
  cin >> c;
  int k;
  cout << "Nhap so nguyen k: ";
  cin >> k;
  s.insert(k,1,c);
  cout << "Xau sau khi chen them ki tu " << c << " vao vi tri " << k << " la: " << s << "\n";
  return 0;
}
