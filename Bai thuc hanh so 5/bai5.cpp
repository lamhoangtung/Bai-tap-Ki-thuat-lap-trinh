#include <iostream>

using namespace std;

void nhap(char c, int &n){
  cout << "Nhap so nguyen " << c << ": ";
  cin >> n;
}

float tbc(int n, int m){
  return (n+m)/2.0;
}

int hieu(int n,int m){
  return n-m;
}

int tongle(int n,int m){
  int sum=0;
  for (int i=n;i<=m;i++){
    if (i%2!=0){
      sum+=i;
    }
  }
  return sum;
}

int main(){
  int n,m;
  nhap('n',n);
  nhap('m',m);
  cout << "Trung binh cong cua " << n << " va " << m << " la " << tbc(n,m) << "\n";
  cout << "Hieu cua " << n << " va " << m << " la " << hieu(n,m) << "\n";
  cout << "Tong cac so le trong doan [" << n << "," << m << "] la " << tongle(n,m) << "\n";
  return 0;
}
