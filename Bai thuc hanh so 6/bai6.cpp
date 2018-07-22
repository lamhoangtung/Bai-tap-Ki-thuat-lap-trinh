#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
  int n;
  cout << "Nhap so phan tu cua mang: ";
  cin >> n;
  int *a;
  a = new int[n];
  for (int i=0;i<n;i++){
    cout << "Nhap phan tu thu " << i+1 << " cua mang: ";
    cin >> *(a+i);
  }

  for (int i=0;i<n;i++){
    if (*(a+i)%2==0){
      n--;
      for (int j=i;j<n;j++){
        *(a+j)=*(a+j+1);
      }
      a = (int*) realloc(a,n*sizeof(int));
      i--;
    }
  }

  cout << "Mang sau khi xoa het cac phan tu chan la:\n";
  for (int i=0;i<n;i++){
    cout << *(a+i) << " ";
  }
  cout << "\n";
  return 0;
}
