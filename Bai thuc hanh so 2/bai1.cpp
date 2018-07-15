#include <iostream>

using namespace std;

int main(){
  int n;
  cout << "Nhap so tien khach hang phai tra: ";
  cin >> n;
  float ans=0;
  if (n>=200 && n<300){
    ans=n*0.2;
  }
  else if (n>=300){
    ans=n*0.3;
  }
  cout << "So tien khuyen mai la: " << ans << "\n";
  return 0;
}
