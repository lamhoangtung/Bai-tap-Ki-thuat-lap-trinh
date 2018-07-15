#include <iostream>

using namespace std;

int main(){
  int n;
  cout << "Nhap so kWh dien tieu thu trong thang: ";
  cin >> n;
  long long ans;
  if (n<=100){
    ans=n*750;
  }
  else if (n>100 && n<=200){
    ans=100*750+(n-100)*1250;
  }
  else if (n>200 && n<=300){
    ans=100*750+100*1250+(n-200)*1750;
  }
  else{
    ans=100*750+100*1250+100*1750+(n-300)*3000;
  }
  cout << "So tien dien ho tren phai tra la " << ans << " VND.\n";
  return 0;
}
