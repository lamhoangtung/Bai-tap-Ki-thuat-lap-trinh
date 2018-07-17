#include <iostream>
#include <limits.h>

using namespace std;

int main(){
  int n,m;
  cout << "Nhap so hang cua ma tran: ";
  cin >> n;
  cout << "Nhap so cot cua ma tran: ";
  cin >> m;
  int a[n][m],max=INT_MIN;
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      cout << "Nhap phan tu [" << i+1 << "," << j+1 << "]: ";
      cin >> a[i][j];
      if (a[i][j]>max) max=a[i][j];
    }
  }
  cout << "\nMa tran B:\n";
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      cout << max-a[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}
