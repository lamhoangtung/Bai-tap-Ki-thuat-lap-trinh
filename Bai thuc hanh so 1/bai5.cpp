#include <iostream>
#include <math.h>

using namespace std;

int main(){
  int x1,x2,x3,y1,y2,y3;
  cout << "Nhap toa do diem A: ";
  cin >> x1 >> y1;
  cout << "Nhap toa do diem B: ";
  cin >> x2 >> y2;
  cout << "Nhap toa do diem C: ";
  cin >> x3 >> y3;
  float x = (x1+x2+x3)/3;
  float y = (y1+y2+y3)/3;
  float inter = sqrt(pow(x1-x,2)+pow(y1-y,2))+sqrt(pow(x2-x,2)+pow(y2-y,2))+sqrt(pow(x3-x,2)+pow(y3-y,2));
  cout << "Inter = " << inter << "\n";
  return 0;
}
