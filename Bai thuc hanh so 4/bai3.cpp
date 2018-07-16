#include <iostream>

using namespace std;

int main(){
  int n;
  cout << "Nhap so chieu cua vector: ";
  cin >> n;
  int x[n],y[n];
  for (int i=0;i<n;i++){
    cout << "Nhap x[" << i+1 << "]: ";
    cin >> x[i];
  }
  for (int i=0;i<n;i++){
    cout << "Nhap y[" << i+1 << "]: ";
    cin >> y[i];
  }
  int ans=0;
  for (int i=0;i<n;i++){
    ans+=x[i]*y[i];
  }
  cout << "Tich vo huong cua hai vector x va y la " << ans << "\n";
  return 0;
}
