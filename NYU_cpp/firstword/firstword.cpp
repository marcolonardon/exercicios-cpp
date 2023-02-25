#include <iostream>
#include <string>
using namespace std;

string firstword(string s);
int main() {
  cout << firstword("aaa bbb ccc ddd");
  return 0;
}

string firstword(string s){
  string str;
  for(int i = 0; i < s.find(" "); i++){
    str = str + s[i];
  }

  return str;
}  