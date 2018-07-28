#include <iostream>
#include <string>

using namespace std;

int main(){
  string s;
  cout << "Nhap xau ki tu: ";
  getline(cin,s);
  bool found=false;
  for (int i=0;i<s.length()-2;i++){
    if (s[i]=='B' && s[i+1]=='I' && s[i+2]=='S'){
      found=true;
      break;
    }
  }
  if (found==true) cout << "Xau vua nhap co chua tu \"BIS\".\n";
  else cout << "Xau vua nhap khong chua tu \"BIS\".\n";

  cout << "Nhap vao mot ki tu: ";
  char c;
  cin >> c;
  for (int i=0;i<s.length();i++){
    if (s[i]==c) s.erase(i,1);
  }
  cout << "Xau ki tu sau khi xoa moi ki tu " << c << " co trong xau la: " << s << "\n";
  cout << "Nhap vao mot ki tu: ";
  cin >> c;

  cout << "Nhap vao vi tri k: ";
  int k;
  cin >> k;
  s.insert(k,1,c);
  cout << "Xau ki tu sau khi chen ki tu " << c << " vao vi tri " << k << " la: " << s << "\n";

  return 0;
}
