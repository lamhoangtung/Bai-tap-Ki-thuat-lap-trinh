#include <iostream>

#define DG1 750
#define DG2 1250
#define DG3 1750
#define DG4 3000

using namespace std;

int main(){
  int n;
  cout << "Nhap so kWh dien tieu thu trong thang: ";
  cin >> n;
  long long ans;
  if (n<=100){
    ans=n*DG1;
  }
  else if (n>100 && n<=200){
    ans=100*DG1+(n-100)*DG2;
  }
  else if (n>200 && n<=300){
    ans=100*DG1+100*DG2+(n-200)*DG3;
  }
  else{
    ans=100*DG1+100*DG2+100*DG3+(n-300)*DG4;
  }
  cout << "So tien dien ho tren phai tra la " << ans << " VND.\n";
  return 0;
}
