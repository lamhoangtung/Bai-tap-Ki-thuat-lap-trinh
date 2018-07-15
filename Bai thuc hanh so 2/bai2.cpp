#include <iostream>
#include <math.h>

using namespace std;

int main(){
  float a,b,c;
  cout << "Nhap a: ";
  cin >> a;
  cout << "Nhap b: ";
  cin >> b;
  cout << "Nhao c: ";
  cin >> c;
  if (a==0){
    cout << "Phuong trinh tren khong phai phuong trinh bac 2.\n";
  }
  else{
    float delta = b*b-4*a*c;
    if (delta<0){
      cout << "Phuong trinh vo nghiem.\n";
    }
    else if (delta == 0){
      float ans = -b/(2*a);
      cout << "Phuong trinh tren co nghiem kep la " << ans << ".\n";
    }
    else{
      float n1 = (-b+sqrt(delta))/(2*a);
      float n2 = (-b-sqrt(delta))/(2*a);
      cout << "Phuong trinh tren co 2 nghiem phan biet la " << n1 << " va " << n2 << ".\n";
    }
  }
  return 0;
}
