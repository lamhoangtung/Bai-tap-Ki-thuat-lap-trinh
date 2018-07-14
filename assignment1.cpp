#include <iostream>
#include <math.h>

using namespace std;

void nhap(float &x){
  cout << "Nhap so thuc x: ";
  cin >> x;
}

void nhap(int &n, char c){
  cout << "Nhap so nguyen " << c << ": ";
  cin >> n;
}

void inc(int &n){
  n++;
}

void dec(int &n){
  n--;
}

float p(float x,int n){
  float ans = 2018*pow(x,n);
  for (int i=2;i<=n;i++){
    ans += (pow(x,i)/pow(3,i-1));
  }
  return ans;
}

int tong(int n, int m){
  int ans=0,start;
  if (n>6 && n%2==0){
    start=n;
  }
  else if (n>6 && n%2!=0){
    start=n-1;
  }
  else start=6;
  for (int i=start;i<=m;i+=2){
    ans+=i;
  }
  return ans;
}

int main(){
  float x;
  nhap(x);
  int n,m;
  nhap(n,'n');
  nhap(m,'m');
  inc(n);
  inc(m);
  cout << "P(x,n) = " << fixed << p(x,n) << "\n";
  cout << "Tong cac so chan lon hon 5 trong doan [" << n << ";" << m << "] la: " << tong(n,m) << "\n";
  return 0;
}
