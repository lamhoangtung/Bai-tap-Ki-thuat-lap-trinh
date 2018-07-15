#include <iostream>

using namespace std;

float f(float x, int n){
  if (n==1) return x;
  else return (x/n*f(x,n-1));
}

int main(){
  float x;
  cout << "Nhap so thuc x: ";
  cin >> x;
  int n;
  cout << "Nhap so nguyen n: ";
  cin >> n;
  float ans=f(x,n);
  cout << "f(x,n) = " << ans << "\n";
  return 0;
}
