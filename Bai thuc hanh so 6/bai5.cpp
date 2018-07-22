#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
  int n;
  cout << "Nhap so phan tu cua mang: ";
  cin >> n;
  int *a=new int[n];
  for (int i=0;i<n;i++){
    cout << "Nhap phan tu thu " << i+1 << " cua mang: ";
    cin >> *(a+i);
  }
  int k=n;
  for (int i=0;i<n;i++){
    if (*(a+i)%2!=0){
      k++;
      a=(int*) realloc(a,k*sizeof(int));
      *(a+k-1)=*(a+i);
    }
  }
  n=k;
  cout << "Mang sau khi sao chep cac phan tu le vao cuoi la:\n";
  for (int i=0;i<n;i++){
    cout << *(a+i) << " ";
  }
  cout << "\n";
  return 0;
}
