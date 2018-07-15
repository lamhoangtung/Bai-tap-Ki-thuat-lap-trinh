#include <iostream>

using namespace std;

void nhap(char c,float &n){
  cout << "Nhap so thuc " << c << ": ";
  cin >> n;
}

float max(float a, float b, float c){
  if (a>=b&&a>=c) return a;
  if (b>=a&&b>=c) return b;
  if (c>=a&&c>=b) return c;
}

float min(float a, float b, float c){
  if (a<=b&&a<=c) return a;
  if (b<=a&&b<=c) return b;
  if (c<=a&&c<=b) return c;
}

int main(){
  float a,b,c;
  nhap('a',a);
  nhap('b',b);
  nhap('c',c);
  float d,e;
  nhap('d',d);
  nhap('e',e);
  cout << "So nho nhat trong 5 so la " << min(min(a,b,c),d,e) << "\n";
  cout << "So lon nhat trong 5 so la " << max(max(a,b,c),d,e) << "\n";
  return 0;
}
