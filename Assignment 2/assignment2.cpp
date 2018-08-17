#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <iomanip>

using namespace std;

void Input(double *&a, int &n){
  cout << "Nhap so phan tu cua day so: ";
  cin >> n;
  a = new double [n];
  for (int i=0;i<n;i++){
    cout << "Nhap phan tu thu " << i+1 << ": ";
    cin >> a[i];
  }
}

void Sort(double a[], int n){
  for (int j=n-1;j>=1;j--){
    for (int i=0;i<=j-1;i++){
      if (a[i]>a[i+1]){
        double temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
      }
    }
  }
}

double SumOfEvenIndex(double a[], int n){
  double sum=0;
  for (int i=2;i<n;i+=2){
    sum+=*(a+i);
  }
  return sum;
}

void OutputToScreen(double a[], int n){
  for (int i=0;i<n;i++){
    cout << *(a+i) << " ";
  }
  cout << endl;
}

void OutputToFile(double a[], int n){
  ofstream OutputFile;
  OutputFile.open("output.txt");
  OutputFile << n << endl;
  for (int i=0;i<n;i++){
    OutputFile << setprecision(2) << *(a+i) << " ";
  }
  OutputFile << endl << "end" << endl;
  OutputFile.close();
}

void TwoMax(double a[], int n){
  cout << "Phan tu lon nhat trong mang la " << a[n-1] << endl;
  for (int i=n-1;i>=0;i--){
    if (a[i]!=a[n-1]){
      cout << "Phan tu lon thu hai trong mang la " << a[i] << endl;
      break;
    }
  }
}

bool ThreeConsecutivePositiveNumbers(double a[], int n){
  for (int i=0;i<n-2;i++){
    if (a[i]<=a[i+1] && a[i+1]<=a[i+2]) return true;
  }
  return false;
}

void DeleteElement(double a[], int &n, double k){
  for (int i=0;i<n;i++){
    while (*(a+i)>k){
      n--;
      for (int j=i;j<n;j++){
        *(a+j)=*(a+j+1);
      }
      a = (double*) realloc(a,n*sizeof(double));
    }
  }
}

int main(){
  double *a = new double;
  int n;
  Input(a,n);
  Sort(a,n);
  cout << "Tong cac phan tu co chi so chan trong mang la " << SumOfEvenIndex(a,n) << endl;
  cout << "Mang ban vua nhap la: " << endl;
  OutputToScreen(a,n);
  OutputToFile(a,n);
  TwoMax(a,n);
  if (ThreeConsecutivePositiveNumbers(a,n)==true){
    cout << "Mang co chua ba so duong lien tiep" << endl;
  }
  else{
    cout << "Mang khong chua ba so duong lien tiep" << endl;
  }
  DeleteElement(a,n,5);
  cout << "Mang sau khi xoa di cac phan tu lon hon 5 la: " << endl;
  OutputToScreen(a,n);
  return 0;
}
