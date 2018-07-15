#include <iostream>
#include <math.h>

using namespace std;

bool nguyento(int n){
  if (n<2) return false;
  for (int i=2;i<=sqrt(n);i++){
    if (n%i==0) return false;
  }
  return true;
}

int main(){
  int n;
  cout << "Nhap n: ";
  cin >> n;
  int sum=0,count=0;
  for (int i=1;i<=n;i++){
    if (nguyento(i)==true){
      sum+=i;
      count++;
    }
  }
  cout << "Co " << count << " so nguyen to trong doan tu 1 den " << n << ".\n";
  cout << "Tong cua chung la " << sum << ".\n";
  return 0;
}
