#include <iostream>
#include <math.h>

using namespace std;

int main(){
  int x;
  cout << "Nhap vao so nguyen x: ";
  cin >> x;
  float f = (x*x+exp(abs(x))+sin(x)*sin(x))/pow(x*x+1,1.0/5);
  cout << "f(x) = " << f << "\n";
  return 0;
}
