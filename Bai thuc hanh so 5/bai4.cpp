#include <iostream>
#include <math.h>

using namespace std;

void nhap(char c, float &x, float &y){
  cout << "Nhap toa do diem "<< c <<": ";
  cin >> x >> y;
}

float kce(float x1, float y1, float x2, float y2){
  float ans = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
  return ans;
}

void mind(float x1, float x2, float x3, float y1, float y2, float y3){
  float kca=kce(x1,y1,0,0);
  float kcb=kce(x2,y2,0,0);
  float kcc=kce(x3,y3,0,0);
  if (kca<=kcb && kca<=kcc) cout << "Diem A gan tam O nhat.\n";
  if (kcb<=kca && kcb<=kcc) cout << "Diem B gan tam O nhat.\n";
  if (kcc<=kca && kcc<=kcb) cout << "Diem C gan tam O nhat.\n";
}

void maxd(float x1, float x2, float x3, float y1, float y2, float y3){
  float kca=kce(x1,y1,0,0);
  float kcb=kce(x2,y2,0,0);
  float kcc=kce(x3,y3,0,0);
  if (kca>=kcb && kca>=kcc) cout << "Diem A xa tam O nhat.\n";
  if (kcb>=kca && kcb>=kcc) cout << "Diem B xa tam O nhat.\n";
  if (kcc>=kca && kcc>=kcb) cout << "Diem C xa tam O nhat.\n";
}

int main(){
  float x1,x2,x3,y1,y2,y3;
  nhap('A',x1,y1);
  nhap('B',x2,y2);
  nhap('C',x3,y3);
  mind(x1,x2,x3,y1,y2,y3);
  maxd(x1,x2,x3,y1,y2,y3);
  return 0;
 }
