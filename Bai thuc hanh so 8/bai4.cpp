#include <iostream>
#include <iomanip>

using namespace std;

struct manufacture{
  string name;
  string address;
};

struct item{
  string id;
  string name;
  manufacture oem;
};

int main(){
  int n;
  cout << "Nhap so mat hang: ";
  cin >> n;
  item mathang[n];
  for (int i=0;i<n;i++){
    cout << "\nMat hang thu " << i+1 << ":\n";
    cout << "\tMa mat hang: ";
    cin.ignore();
    getline(cin,mathang[i].id);
    cout << "\tTen hang: ";
    getline(cin,mathang[i].name);
    cout << "\tNha san xuat: ";
    cin >> mathang[i].oem.name;
  }

  int count=0;
  for (int i=0;i<n;i++){
    if (mathang[i].oem.name=="SONY"){
      count++;
      if (count==1){
        cout << "\nCac mat hang cua SONY la:\n";
        cout << setw(20) << "Ma hang" << setw(20) << "Ten mat hang" << setw(20) << "Nha san xuat" << "\n";
      }
      cout << setw(20) << mathang[i].id << setw(20) << mathang[i].name << setw(20) << mathang[i].oem.name << "\n";
    }
  }
  if (count==0) cout << "Khong co mat hang nao cua SONY.\n";
  return 0;
}
