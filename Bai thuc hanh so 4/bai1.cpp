#include <iostream>

using namespace std;

int main(){
  int n;
  float a[1000];
  cout << "Nhap so phan tu cua day: ";
  cin >> n;
  for (int i=0;i<n;i++){
    cout << "Nhap phan thu thu " << i+1 << ": ";
    cin >> a[i];
  }
  float min=a[0],max=a[0];
  for (int i=1;i<n;i++){
    if (a[i]>max) max=a[i];
    if (a[i]<min) min=a[i];
  }
  cout << "Phan tu nho nhat trong day la " << min << " va phan tu lon nhat trong day la " << max << "\n";
  return 0;
}
