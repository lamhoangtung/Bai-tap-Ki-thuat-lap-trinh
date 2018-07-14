#include <iostream>
#include <math.h>

using namespace std;

int main(){
  int x1,x2,y1,y2;
  cout << "Nhap toa do diem A: ";
  cin >> x1 >> y1;
  cout << "Nhap toa do diem B: ";
  cin >> x2 >> y2;
  float D = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
  float M = abs(x2-x1)+abs(y2-y1);
  float C = 1-((x1*x2+y1*y2)/(sqrt(x1*x1+y1*y1)*sqrt(x2*x2+y2*y2)));
  cout << "Giua A(" << x1 << "," << y1 << ") va B(" << x2 << "," << y2 << "):\n";
  cout << "- Khoang cach Euclidean la: " << D << "\n";
  cout << "- Khoang cach Manhattan la: " << M << "\n";
  cout << "- Khoang cach Cosin la: " << C << "\n";
  return 0;
 }
