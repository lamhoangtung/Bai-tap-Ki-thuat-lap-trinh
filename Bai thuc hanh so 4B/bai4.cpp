#include <iostream>

using namespace std;

int main(){
  int n,m;
  cout << "Nhap so hang cua ma tran: ";
  cin >> n;
  cout << "Nhap so cot cua ma tran: ";
  cin >> m;
  int a[n][m];
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      cout << "Nhap phan tu [" << i+1 << "," << j+1 << "]: ";
      cin >> a[i][j];
    }
  }
  for (int i=1;i<=n-2;i++){
    for (int j=1;j<=m-2;j++){
      a[i][j]=(a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1])/4;
    }
  }
  cout << "\nKet qua sau lam phang nhieu ma tran a la:\n";
  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}
