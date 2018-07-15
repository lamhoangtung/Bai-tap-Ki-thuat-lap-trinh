#include <iostream>

using namespace std;

int catalan(int n){
  if (n==1 || n==2) return 1;
  else{
    int t=0;
    for (int i=0;i<n;i++){
      t+=catalan(i)*catalan(n-i);
    }
    return t;
  }
}

int main(){
  int n;
  cout << "Nhap so nguyen duong n: ";
  cin >> n;
  cout << "Chu so CataLan thu " << n << " la " << catalan(n) << "\n";
  return 0;
}
