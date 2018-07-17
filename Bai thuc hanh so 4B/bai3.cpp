#include <iostream>

using namespace std;

int main(){
  int n,m;
  cout << "Nhap so hang cua ma tran: ";
  cin >> n;
  cout << "Nhap so cot cua ma tran: ";
  cin >> m;
  int a[n][m],sum=0;
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      cout << "Nhap phan tu [" << i+1 << "," << j+1 << "]: ";
      cin >> a[i][j];
      sum+=a[i][j];
    }
  }
  float tb=float(sum/(n*m));
  int k;
  cout << "Nhap do nhieu K: ";
  cin >> k;
  cout << "\nKet qua sau khi loc nhieu ma tran a la:\n";
  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
      if (a[i][j]>k) a[i][j]=tb;
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}
