#include <iostream>

using namespace std;

long giaithua(int n){
  if (n==1){
    return 1;
  }
  else{
    return (n*giaithua(n-1));
  }
}

int main(){
  int a,b;
  cout << "Nhap so nguyen a: ";
  cin >> a;
  cout << "Nhap so nguyen b: ";
  cin >> b;
  float ans=(float)(giaithua(a)+giaithua(b))/giaithua(a+b);
  cout << "(a!+b!)/(a+b)! = " << ans << "\n";
  return 0;
}
