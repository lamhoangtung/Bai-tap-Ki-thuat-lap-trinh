#include <iostream>

using namespace std;

int main(){
  int n;
  cout << "Nhap so tien khach hang phai tra: ";
  cin >> n;
  float ans=n;
  if (n>=200 && n<300){
    ans-=n*0.2;
  }
  else if (n>=300){
    ans-=n*0.3;
  }
  cout << "So tien khach hang phai tra la: " << ans << "\n";
  return 0;
}
