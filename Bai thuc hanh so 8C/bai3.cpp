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
  cout << "\nMa tran vua nhap la:\n";
  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }
  cout << "\n";
  for (int i=0;i<n;i++){
    int max=a[i][0];
    for (int j=0;j<m;j++){
      if (a[i][j]>max) max=a[i][j];
    }
    cout << "Gia tri max tren dong " << i+1 << " la " << max << "\n";
  }

  for (int j=0;j<m;j++){
    int min=a[0][j];
    for (int i=0;i<n;i++){
      if (a[i][j]<min) min=a[i][j];
    }
    cout << "Gia tri min tren cot " << j+1 << " la " << min << "\n";
  }
  int b[m][n];
  for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      b[i][j]=a[j][i];
      a[j][i]=-a[j][i];
    }
  }

  cout << "\nMa tran a sau khi doi dau la:\n";
  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }

  cout << "\nMa tran chuyen vi b la:\n";
  for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      cout << b[i][j] << " ";
    }
    cout << "\n";
  }
  cout << "\n";
  for (int i=0;i<n;i++){
    int count=0;
    for (int j=0;j<m;j++){
      if (a[i][j]>0) count++;
    }
    cout << "So phan tu duong tren dong " << i+1 << " cua a la " << count << "\n";
  }
  for (int i=0;i<m;i++){
    int count=0;
    for (int j=0;j<n;j++){
      if (b[i][j]>0) count++;
    }
    cout << "So phan tu duong tren dong " << i+1 << " cua b la " << count << "\n";
  }

  return 0;
}
