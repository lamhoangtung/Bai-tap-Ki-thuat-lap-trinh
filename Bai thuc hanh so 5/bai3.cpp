#include <iostream>

using namespace std;

int tongchan(int n,int m){
  int ans=0;
  for (int i=n;i<=m;i++){
    if (i%2==0){
      ans+=i;
    }
  }
  return ans;
}

float tbc3(int n,int m){
  int sum=0,count=0;
  for (int i=n;i<=m;i++){
    if (i%3==0){
      sum+=i;
      count++;
    }
  }
  if (count!=0) return float(sum/count);
  else return 0;
}

int main(){
  int n,m;
  cout << "Nhap so nguyen n: ";
  cin >> n;
  cout << "Nhap so nguyen m: ";
  cin >> m;
  cout << "Tong cac so chan trong doan [" << n << "," << 2*m << "] la " << tongchan(n,2*m) << "\n";
  cout << "Trung binh cong cac so chia het cho 3 trong doan [" << n << "," << n+m << "] la " << tbc3(n,n+m) << "\n";
  return 0;
}
