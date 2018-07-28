#include <iostream>
#include <iomanip>

using namespace std;

struct monhoc{
  string ten;
  int sotrinh;
  float diem;
};

struct phieu{
  string masinhvien;
  string tensinhvien;
  string lop;
  int khoa;
  monhoc mon[100];
};

int main(){
  phieu phieubaodiem;
  cout << "Nhap ma sinh vien: ";
  getline(cin,phieubaodiem.masinhvien);
  cout << "Nhap ten sinh vien: ";
  getline(cin,phieubaodiem.tensinhvien);
  cout << "Nhap lop: ";
  getline(cin,phieubaodiem.lop);
  cout << "Nhap khoa: ";
  cin >> phieubaodiem.khoa;
  float sum=0;
  cout << "Nhap so luong mon hoc: ";
  int n;
  cin >> n;
  for (int i=0;i<n;i++){
    cout << "\nMon thu " << i+1 << ":\n";
    cout << "\tTen mon hoc: ";
    cin.ignore();
    getline(cin,phieubaodiem.mon[i].ten);
    cout << "\tSo trinh: ";
    cin >> phieubaodiem.mon[i].sotrinh;
    cout << "\tDiem: ";
    cin >> phieubaodiem.mon[i].diem;
    sum+=phieubaodiem.mon[i].diem;
  }
  cout << "\n\t\t\t\tPHIEU BAO DIEM\n";
  cout << setw(20) << "Ma sinh vien: " << phieubaodiem.masinhvien << "        " << setw(20) << "Ten sinh vien: " << phieubaodiem.tensinhvien << "\n";
  cout << setw(20) << "Lop: " << phieubaodiem.lop << "        " << setw(20) << "Khoa: " << phieubaodiem.khoa << "\n";
  cout << setw(20) << "Bang diem:\n";
  cout << setw(20) << "Ten mon" << setw(20) << "So trinh" << setw(20) << "Diem\n";
  for (int i=0;i<n;i++){
    cout << setw(20) << phieubaodiem.mon[i].ten << setw(20) << phieubaodiem.mon[i].sotrinh << setw(20) << phieubaodiem.mon[i].diem << "\n";
  }
  cout << "\n\tDiem trung binh: " << sum/n << "\n";
  return 0;
}
