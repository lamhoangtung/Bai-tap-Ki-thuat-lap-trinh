#include <iostream>
#include <math.h>

using namespace std;

float t(int n){
  float ans=0;
  for (int i=1;i<=n;i++){
    ans+=i;
    ans+=pow(i,i);
    ans+=1.0/(2*i+1);
  }
  return ans;
}

int main(){
  int n;
  cout << "Nhap so nguyen duong n: ";
  cin >> n;
  cout << "T = " << t(n) << "\n";
  return 0;
}
