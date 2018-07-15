#include <iostream>
#include <math.h>

using namespace std;

int main(){
  float x;
  int n;
  cout << "Nhap vao mot so thuc x: ";
  cin >> x;
  cout << "Nhap vao mot so nguyen n: ";
  cin >> n;
  float s=0;
  if (n%2==0){
    s+=2016*x;
    for (int i=2;i<=n;i++){
      s+=(pow(x,i)/pow(3,i-1));
    }
  }
  cout << "S = " << s << "\n";
  return 0;
}
