#include <iostream>
#include <iomanip>

using namespace std;

struct DateOfBirth{
  int day;
  int month;
  int year;
};

struct student{
  long long id;
  string name;
  DateOfBirth dob;
};

int main(){
  int n;
  cout << "Nhap so sinh vien: ";
  cin >> n;
  student sv[n];
  for (int i=0;i<n;i++){
    cout << "\nSinh vien thu " << i+1 << ":\n";
    cout << "\tMa sinh vien: ";
    cin >> sv[i].id;
    cout << "\tHo va ten: ";
    cin.ignore();
    getline(cin,sv[i].name);
    cout << "\tNgay thang nam sinh: ";
    cin >> sv[i].dob.day >> sv[i].dob.month >> sv[i].dob.year;
  }

  int count=0;
  for (int i=0;i<n;i++){
    if (sv[i].dob.month==12){
      count++;
      if (count==1){
        cout << "\nCac sinh vien sinh thang 12 la:\n";
        cout << setw(20) << "Ma sinh vien" << setw(20) << "Ho va ten" << setw(25) << "Ngay thang nam sinh" << "\n";
      }
      cout << setw(20) << sv[i].id << setw(20) << sv[i].name << setw(10) << sv[i].dob.day << "/" << sv[i].dob.month << "/" << sv[i].dob.year << "\n";
    }
  }
  if (count==0) cout << "Khong co sinh vien nao sinh thang 12.\n";
  return 0;
}
