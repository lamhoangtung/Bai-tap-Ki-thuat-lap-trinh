#include <iostream>

using namespace std;

void tongchiahet(int n,int c){
  int sum=0;
  for (int i=1;i<n;i++){
    if (i%c==0){
      sum+=i;
    }
  }
  cout << "Tong cac so chia het cho " << c << " trong doan [1," << n << "] la " << sum << "\n";
}

int main(){
  int n;
  cout << "Nhap so nguyen duong n: ";
  cin >> n;
  tongchiahet(n,2);
  tongchiahet(2*n,3);
  tongchiahet(3*n,5);
  return 0;
}
