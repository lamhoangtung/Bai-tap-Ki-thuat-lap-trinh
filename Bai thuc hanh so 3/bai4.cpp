#include <iostream>
#include <math.h>

using namespace std;

void nhap(char c,float &n){
  cout << "Nhap so thuc " << c << ": ";
  cin >> n;
}

int ptbh(float a, float b, float c, float &x1, float &x2){
  float delta=b*b-4*a*c;
  if (delta<0){
    return 0;
  }
  else if (delta==0){
    x1=-b/2*a;
    x2=x1;
    return 1;
  }
  else{
    x1=(-b+sqrt(delta))/2*a;
    x2=(-b-sqrt(delta))/2*a;
    return 2;
  }
}

int main(){
  float a,b,c;
  nhap('a',a);
  nhap('b',b);
  nhap('c',c);
  float x1,x2;
  int status = ptbh(a,b,c,x1,x2);
  if (status==0){
    cout << "Phuong trinh tren vo nghiem.\n";
  }
  else if (status==1){
    cout << "Phuong trinh tren co nghiem kep x = " << x1 << ".\n";
  }
  else{
    cout << "Phuong trinh tren co 2 nghiem phan biet x1 = " << x1 << " va x2 = " << x2 << ".\n";
  }
  return 0;
}
