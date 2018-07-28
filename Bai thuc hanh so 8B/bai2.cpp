#include <iostream>
#include <iomanip>

using namespace std;

struct factory{
  string name;
  string address;
  int NumberOfEmployee;
};

factory inputSingleFactory(){
  factory temp;
  cout << "\tTen nha may: ";
  cin.ignore();
  getline(cin,temp.name);
  cout << "\tDia chi: ";
  getline(cin,temp.address);
  cout << "\tSo luong cong nhan: ";
  cin >> temp.NumberOfEmployee;
  return temp;
}

void inputListFactory(factory nhamay[], int &n){
  cout << "Nhap so nha may: ";
  cin >> n;
  for (int i=0;i<n;i++){
    cout << "\nNha may thu " << i+1 << ":\n";
    nhamay[i] = inputSingleFactory();
  }
}

void sortListFactory(factory nhamay[], int n){
  for (int j=n-1;j>=1;j--){
    for (int i=0;i<=j-1;i++){
      if (nhamay[i].NumberOfEmployee>nhamay[i+1].NumberOfEmployee){
        factory temp=nhamay[i];
        nhamay[i]=nhamay[i+1];
        nhamay[i+1]=temp;
      }
    }
  }
}

void outputListFactory(factory nhamay[], int n){
  cout << "\n\t\t\tDANH SACH NHA MAY\n";
  cout << setw(20) << "Ten" << setw(20) << "Dia chi" << setw(20) << "So luong cong nhan" << "\n";
  for (int i=0;i<n;i++){
    cout << setw(20) << nhamay[i].name << setw(20) << nhamay[i].address << setw(20) << nhamay[i].NumberOfEmployee << "\n";
  }
}

void meanNumberOfEmployee(factory nhamay[], int n){
  int sumOfEmployee=0;
  for (int i=0;i<n;i++){
    sumOfEmployee+=nhamay[i].NumberOfEmployee;
  }
  cout << "\nSo luong cong nhan trung binh cua cac nha may la " << sumOfEmployee/n << "\n";
}

void deleteFactory(factory nhamay[], int &n, int k){
  for (int i=0;i<n;i++){
    if (nhamay[i].NumberOfEmployee<k){
      n--;
      for (int j=i;j<n;j++){
        nhamay[j]=nhamay[j+1];
      }
      i--;
    }
  }
}

void insertFactory(factory nhamay[], int &n){
  cout << "\nNhap vi tri k ban muon chen: ";
  int k;
  cin >> k;
  factory temp=inputSingleFactory();
  n++;
  for (int i=n-1;i>k;i--){
    nhamay[i]=nhamay[i-1];
  }
  nhamay[k]=temp;
}

int main(){
  factory nhamay[1000];
  int n;
  inputListFactory(nhamay,n);
  sortListFactory(nhamay,n);
  outputListFactory(nhamay,n);
  meanNumberOfEmployee(nhamay,n);
  deleteFactory(nhamay,n,10);
  insertFactory(nhamay,n);
  outputListFactory(nhamay,n);
  return 0;
}
