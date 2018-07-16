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
  float min=a[0],max=a[0];
  for (int i=1;i<n;i++){
    if (a[i]>max) max=a[i];
    if (a[i]<min) min=a[i];
  }
  for (int i=0;i<n;i++){
    if (a[i]==min){
      a[i]=9999;
    }
    if (a[i]==max){
      a[i]=-9999;
    }
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
  for (int i=0;i<n;i++){
    if (a[i]==9999){
      a[i]=min;
    }
    if (a[i]==-9999){
      a[i]=max;
    }
  }
  cout << "Mang sau khi sap xep theo yeu cau cua de bai la: \n";
  for (int i=0;i<n;i++){
    cout << a[i] << " ";
  }
  cout << "\n";
  return 0;
}
