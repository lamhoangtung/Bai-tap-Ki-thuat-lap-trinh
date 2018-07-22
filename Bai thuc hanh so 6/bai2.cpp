#include <iostream>
#include <string>

using namespace std;

int main(){
  string s;
  cout << "Nhap xau ki tu: ";
  getline(cin,s);
  bool ans=true;
  int n=s.length(),words=1;
  for (int i=0;i<n-1;i++){
    if (s[i]==' ' && s[i+1]==' '){
      ans=false;
      break;
    }
    if (s[i]==' ' && s[i+1]!=' '){
      words++;
      if (words>10){
        ans=false;
        break;
      }
    }
  }
  if (ans==true) cout << "Xau tren hop le.\n";
  else cout << "Xau tren khong hop le.\n";
  return 0;
}
