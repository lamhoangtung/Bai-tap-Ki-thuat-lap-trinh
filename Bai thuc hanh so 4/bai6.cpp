#include <iostream>
#include <math.h>

using namespace std;

int main(){
  int n;
  cout << "Nhap so chieu cua vector: ";
  cin >> n;
  int x[n];
  for (int i=0;i<n;i++){
    cout << "Nhap x[" << i+1 << "]: ";
    cin >> x[i];
  }

  float c1=0,c2=0,c0=0,cinf=-99999;
  for (int i=0;i<n;i++){
    c1+=abs(x[i]);
    c2+=x[i]*x[i];
    if (x[i]!=0) c0++;
    if (x[i]>cinf) cinf=x[i];
  }
  c2=sqrt(c2);
  cout << "Chuan 1 cua X la " << c1 << "\n";
  cout << "Chuan 2 cua X la " << c2 << "\n";
  cout << "Chuan vo cung cua X la " << cinf << "\n";
  cout << "Chuan 0 cua X la " << c0 << "\n";
  return 0;
}
