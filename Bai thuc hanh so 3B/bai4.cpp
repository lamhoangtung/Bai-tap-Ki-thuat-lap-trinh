#include <iostream>

using namespace std;

int dem(int n){
  if (n>=0 && n<=9) return 1;
  else return (dem(n/10)+1);
}

int main(){
  int n;
  cout << "Nhap so nguyen n: ";
  cin >> n;
  cout << "So nguyen " << n << " co " << dem(n) << " chu so.\n";
  return 0;
}
