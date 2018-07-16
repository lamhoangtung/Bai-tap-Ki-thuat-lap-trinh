#include <iostream>

using namespace std;

bool tang(int a[],int n){
  for (int i=0;i<=n-2;i++){
    if (a[i]>a[i+1]){
      return false;
    }
  }
  return true;
}

bool giam(int a[],int n){
  for (int i=0;i<=n-2;i++){
    if (a[i]<a[i+1]){
      return false;
    }
  }
  return true;
}

bool tangngat(int a[],int n){
  for (int i=0;i<=n-2;i++){
    if (a[i]>=a[i+1]){
      return false;
    }
  }
  return true;
}

bool giamngat(int a[],int n){
  for (int i=0;i<=n-2;i++){
    if (a[i]<=a[i+1]){
      return false;
    }
  }
  return true;
}

int main(){
  int n;
  cout << "Nhap vao so phan tu cua mang: ";
  cin >> n;
  int a[n];
  for (int i=0;i<n;i++){
    cout << "Nhap phan thu thu " << i+1 << ": ";
    cin >> a[i];
  }
  if (tangngat(a,n)==true){
    cout << "Day so tren tang ngat.\n";
    return 0;
  }
  else if (tang(a,n)==true){
    cout << "Day so tren tang.\n";
    return 0;
  }

  if (giamngat(a,n)==true){
    cout << "Day so tren giam ngat.\n";
    return 0;
  }
  else if (giam(a,n)==true){
    cout << "Day so tren giam.\n";
    return 0;
  }
  else{
    cout << "Day so tren chua duoc sap.\n";
    return 0;
  }
}
