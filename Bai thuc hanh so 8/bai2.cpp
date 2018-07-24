#include <iostream>
#include <iomanip>

using namespace std;

struct book{
  string name;
  string publisher;
  int NumberOfPage;
};

int main(){
  int n;
  cout << "Nhap so luong sach: ";
  cin >> n;
  book sach[n];
  for (int i=0;i<n;i++){
    cout << "\nSach thu " << i+1 << ":\n";
    cout << "\tTen sach: ";
    cin.ignore();
    getline(cin,sach[i].name);
    cout << "\tNha xuat ban: ";
    getline(cin,sach[i].publisher);
    cout << "\tSo trang: ";
    cin >> sach[i].NumberOfPage;
  }
  int count=0;
  for (int i=0;i<n;i++){
    if (sach[i].publisher=="THANH NIEN"){
      count++;
      if (count==1){
        cout << "\nCac sach cua nha xuat ban THANH NIEN la:\n";
        cout << setw(20) << "Ten sach" << setw(20) << "Nha xuat ban" << setw(20) << "So trang" << "\n";
      }
      cout << setw(20) << sach[i].name << setw(20) << sach[i].publisher << setw(20) << sach[i].NumberOfPage << "\n";
    }
  }
  if (count==0) cout << "Khong co sach nao cua nha xuat ban THANH NIEN.\n";
  return 0;
}
