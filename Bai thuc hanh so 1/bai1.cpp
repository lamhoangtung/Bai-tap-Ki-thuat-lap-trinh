#include <iostream>

using namespace std;

int main(){
  int a,b;
  cout << "Nhap so nguyen a: ";
  cin >> a;
  cout << "Nhap so nguyen b: ";
  cin >> b;
  int tong=a+b;
  int hieu=a-b;
  int tich=a*b;
  float thuong=float(a/b);
  int du=a%b;
  cout << "Tong cua 2 so nguyen " << a << " va " << b << " la: " << tong << "\n";
  cout << "Hieu cua 2 so nguyen " << a << " va " << b << " la: " << hieu << "\n";
  cout << "Tich cua 2 so nguyen " << a << " va " << b << " la: " << tich << "\n";
  cout << "Thuong cua phep chia 2 so nguyen " << a << " va " << b << " la: " << thuong << "\n";
  cout << "Du cua phep chia 2 so nguyen " << a << " va " << b << " la: " << du << "\n";
  return 0;
}
