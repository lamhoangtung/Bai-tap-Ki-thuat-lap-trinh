#include <iostream>

using namespace std;

int main(){
  int n;
  int a[1000];
  cout << "Nhap so phan tu cua day: ";
  cin >> n;
  for (int i=0;i<n;i++){
    cout << "Nhap phan thu thu " << i+1 << ": ";
    cin >> a[i];
  }

  for (int j=n-1;j>=1;j--){
    for (int i=0;i<=j-1;i++){
      if (a[i]>a[i+1]){
        int tg=a[i];
        a[i]=a[i+1];
        a[i+1]=tg;
      }
    }
  }
  cout << "Mang sau khi da sap xep tang dan la: \n";
  for (int i=0;i<n;i++){
    cout << a[i] << " ";
  }
  cout << "\n";

  int count=0;
  for (int i=0;i<n;i++){
    if (a[i]>=10 && a[i]<=20){
      count++;
    }
  }
  cout << "Co " << count << " phan tu trong mang thuoc [10, 20].\n";

  bool found=false;
  for (int i=0;i<n-2;i++){
    if (a[i]%2==0 && a[i]+2==a[i+1] && a[i+1]+2==a[i+2]){
      found=true;
      break;
    }
  }
  if (found==true) cout << "Mang co ton tai ba so chan lien tiep.\n";
  else cout << "Mang khong ton tai ba so chan lien tiep.\n";

  return 0;
}
