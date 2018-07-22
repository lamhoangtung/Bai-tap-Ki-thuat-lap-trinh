#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool arePair(char opening,char closing){
	if (opening == '(' && closing == ')') return true;
	else if (opening == '{' && closing == '}') return true;
	else if (opening == '[' && closing == ']') return true;
	return false;
}

bool balanced(string str){
	stack <char> S;
	for (int i=0;i<str.length();i++){
		if(str[i] == '(' || str[i] == '{' || str[i] == '[')
			S.push(str[i]);
		else if(str[i] == ')' || str[i] == '}' || str[i] == ']'){
			if (S.empty() || !arePair(S.top(),str[i]))
				return false;
			else
				S.pop();
		}
	}
	return S.empty() ? true:false;
}

int main(){
	string s;
	cout << "Nhap xau dau ngoac: ";
	cin >> s;
	if (balanced(s))
		cout << "Hop le.\n";
	else
		cout << "Khong hop le.\n";
  return 0;
}
