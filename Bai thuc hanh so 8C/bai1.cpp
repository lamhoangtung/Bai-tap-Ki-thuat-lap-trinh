#include <iostream>
#include <math.h>

using namespace std;

void inputFloat(float &x, char c){
  cout << "Nhap so thuc " << c << ": ";
  cin >> x;
}

void inputInteger(int &x, char c){
  cout << "Nhap so nguyen " << c << ": ";
  cin >> x;
}

float area(float x, float y){
  return x*y;
}

int sum(int n){
  int ans=0;
  for (int i=0;i<n;i+=2){
    if (i%3==0) ans+=i;
  }
  return ans;
}

float f1(float x,int n){
  float ans=2016*pow(x,n),temp=1;
  for (int i=1;i<=n;i++){
    temp*=x/3;
    ans+=temp;
  }
  return ans;
}

float f2(float x, int n){
  float ans;
  if (n>10) ans=2016*x;
  else {
    ans=exp(x);
    for (int i=1;i<=n;i++) ans+=i;
  }
  return ans;
}

int main(){
  float x,y;
  inputFloat(x,'x');
  inputFloat(y,'y');
  int n;
  inputInteger(n,'n');
  cout << "Dien tich cua hinh chu nhat co canh la " << x << " va " << y << " la " << area(x,y) << "\n";
  cout << "Tong cac so chan va chia het cho 3 trong doan tu 1 den " << n << " la " << sum(n) << "\n";
  cout << "F1(" << x << "," << n << ") = " << f1(x,n) << "\n";
  cout << "F2(" << x << "," << n << ") = " << f2(x,n) << "\n";
  return 0;
}
