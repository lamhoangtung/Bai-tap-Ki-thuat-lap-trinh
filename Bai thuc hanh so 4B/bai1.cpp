#include <iostream>

using namespace std;

int main(){
  int n,m;
  cout << "Nhap so doi bong: ";
  cin >> n;
  cout << "Nhap so tran cua moi doi: ";
  cin >> m;
  int a[n][m+1];
  for (int i=0;i<n;i++){
    a[i][m+1]=0;
    for (int j=0;j<m;j++){
      cout << "Nhap diem so cua doi thu " << i+1 << " trong tran thu " << j+1 << ": ";
      cin >> a[i][j];
      a[i][m+1]+=a[i][j];
    }
  }
  int max=a[0][m+1];
  for (int i=0;i<n;i++){
    bool batbai=true;
    for (int j=0;j<m;j++){
      if (a[i][j]==0){
        batbai=false;
        break;
      }
    }
    if (batbai==true) cout << "Doi thu " << i+1 << " da thi dau " << m << " tran bat bai.\n";
    if (a[i][m+1]>max) max=a[i][m+1];
  }
  cout << "Nhung doi bong co diem cao nhat la: ";
  for (int i=0;i<n;i++){
    if (a[i][m+1]==max) cout << i+1;
  }
  cout << "\n";
  return 0;
}
