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
  int n;
  cout << "Nhap so nguyen n: ";
  cin >> n;
  double s=(giaithua(n)+1)/giaithua(n+1);
  cout << "S = " << s << "\n";
  return 0;
}
