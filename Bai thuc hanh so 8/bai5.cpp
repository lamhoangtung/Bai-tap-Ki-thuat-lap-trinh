#include <iostream>
#include <iomanip>

using namespace std;

struct items{
  string name;
  float price;
  int amount;
  float money;
};

struct bill{
  string id;
  string ncc;
  string nccname;
  string address;
  string day;
  items item[100];
};

int main(){
  bill phieu;
  cout << "Nhap ma phieu: ";
  getline(cin,phieu.id);
  cout << "Nhap ma NCC: ";
  getline(cin,phieu.ncc);
  cout << "Nhap ten NCC: ";
  getline(cin,phieu.nccname);
  cout << "Nhap dia chi: ";
  getline(cin,phieu.address);
  cout << "Nhap ngay lap: ";
  getline(cin,phieu.day);
  cout << "Nhap so luong mat hang: ";
  int n;
  cin >> n;
  long long sum=0;
  for (int i=0;i<n;i++){
    cout << "\nMat hang thu " << i+1 << ":\n";
    cout << "\tTen hang: ";
    cin.ignore();
    getline(cin,phieu.item[i].name);
    cout << "\tDon gia: ";
    cin >> phieu.item[i].price;
    cout << "\tSo luong: ";
    cin >> phieu.item[i].amount;
    phieu.item[i].money=phieu.item[i].price*phieu.item[i].amount;
    sum+=phieu.item[i].money;
  }
  cout << "\n\t\t\t\tPHIEU NHAP HANG\n";
  cout << setw(20) << "Ma phieu: " << phieu.id << "        " << setw(20) << "Ngay lap: " << phieu.day << "\n";
  cout << setw(20) << "Ma NCC: " << phieu.ncc << "        " << setw(20) << "Ten NCC: " << phieu.nccname << "\n";
  cout << setw(20) << "Dia chi: " << phieu.address << "\n";
  cout << setw(20) << "Ten hang" << setw(20) << "Don gia" << setw(20) << "So luong" << setw(20) << "Thanh tien\n";
  for (int i=0;i<n;i++){
    cout << setw(20) << phieu.item[i].name << setw(20) << phieu.item[i].price << setw(20) << phieu.item[i].amount << setw(20) << phieu.item[i].money << "\n";
  }
  cout << "\n\tTong thanh tien la " << sum << " dong.\n";
  return 0;
}
