#include <iostream>
#include <iomanip>

using namespace std;

struct factory{
  string name;
  string address;
  int NumberOfEmployee;
};

int main(){
  int n;
  cout << "Nhap so nha may: ";
  cin >> n;
  factory nhamay[n];
  for (int i=0;i<n;i++){
    cout << "\nNha may thu " << i+1 << ":\n";
    cout << "\tTen nha may: ";
    cin.ignore();
    getline(cin,nhamay[i].name);
    cout << "\tDia chi: ";
    getline(cin,nhamay[i].address);
    cout << "\tSo luong cong nhan: ";
    cin >> nhamay[i].NumberOfEmployee;
  }
  cout << "\n\t\t\tDANH SACH NHA MAY\n";
  cout << setw(20) << "Ten" << setw(20) << "Dia chi" << setw(20) << "So luong cong nhan" << "\n";
  for (int i=0;i<n;i++){
    cout << setw(20) << nhamay[i].name << setw(20) << nhamay[i].address << setw(20) << nhamay[i].NumberOfEmployee << "\n";
  }
  return 0;
}
