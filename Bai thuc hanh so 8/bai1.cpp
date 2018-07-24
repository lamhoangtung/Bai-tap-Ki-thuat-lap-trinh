#include <iostream>
#include <iomanip>

using namespace std;

struct employee{
  string name;
  string address;
  long long salary;
};

int main(){
  int n;
  cout << "Nhap so nhan su: ";
  cin >> n;
  employee nv[n];
  long long SumSalary=0;
  for (int i=0;i<n;i++){
    cout << "\nNhan su thu " << i+1 << ":\n";
    cout << "\tHo va ten: ";
    cin.ignore();
    getline(cin,nv[i].name);
    cout << "\tDia chi: ";
    getline(cin,nv[i].address);
    cout << "\tMuc luong: ";
    cin >> nv[i].salary;
    SumSalary+=nv[i].salary;
  }
  cout << "\nTong luong cua cac nhan su la " << SumSalary << " dong.\n";
  cout << "\n\t\t\tDANH SACH NHAN SU\n";
  cout << setw(20) << "Ho va ten" << setw(20) << "Dia chi" << setw(20) << "Muc luong" << "\n";
  for (int i=0;i<n;i++){
    cout << setw(20) << nv[i].name << setw(20) << nv[i].address << setw(20) << nv[i].salary << "\n";
  }
  return 0;
}
