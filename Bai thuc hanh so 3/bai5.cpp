#include <iostream>

using namespace std;

void nhap(char c,float &n){
  cout << "Nhap so thuc " << c << ": ";
  cin >> n;
}

int hept(float a, float b, float c, float d, float e, float f, float &x, float &y){
  float D=a*e-b*d;
  float Dx=c*e-b*f;
  float Dy=a*f-c*d;
  if (D==0 && Dx==0)
    return 1;
  if (D==0 && Dx!=0)
    return 0;
  if (D!=0){
    x=Dx/D;
    y=Dy/D;
    return 2;
  }
}

int main(){
  float a,b,c,d,e,f;
  nhap('a',a);
  nhap('b',b);
  nhap('c',c);
  nhap('d',d);
  nhap('e',e);
  nhap('f',f);
  float x,y;
  int status = hept(a,b,c,d,e,f,x,y);
  if (status==0){
    cout << "He phuong trinh tren vo nghiem.\n";
  }
  else if (status==1){
    cout << "He phuong trinh tren co vo so nghiem.\n";
  }
  else{
    cout << "He phuong trinh tren co mot nghiem x = " << x << " va y = " << y << ".\n";
  }
  return 0;
}
