#include <iostream>
#include <string>

using namespace std;

int main(){
  string s;
  cout << "Nhap xau ki tu: ";
  getline(cin,s);
  int count=0;
  for (int i=0;i<s.length();i++){
    if (s[i]>='a' && s[i]<='z'){
      count++;
    }
  }
  cout << "Xau vua nhap co " << count << " chu cai thuong.\n";
  for (int i=0;i<s.length();i++){
    if (s[i]=='a'){
      s.erase(i,1);
      i--;
    }
  }
  cout << "Xau sau khi xoa moi ki tu 'a' la: " << s << "\n";
  return 0;
}
