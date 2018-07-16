#include <iostream>

using namespace std;

int main(){
  int n;
  cout << "Nhap vao so phan tu cua mang: ";
  cin >> n;
  int a[n];
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
  return 0;
}
