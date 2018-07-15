#include <iostream>

using namespace std;

float f(float x, int n){
  return 2*x*x+n*x+n;
}

int main(){
  float x,y;
  cout << "Nhap vao so thuc x: ";
  cin >> x;
  cout << "Nhap vao so thuc y: ";
  cin >> y;
  int n;
  cout << "Nhap vao so nguyen n: ";
  cin >> n;
  float p=f(x,n)+f(y,n)+f(x+y,n);
  cout << "P = " << p << "\n";
  return 0;
}
