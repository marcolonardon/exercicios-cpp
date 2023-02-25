#include <iostream>
#include <string>
using namespace std;

string remainingwords(string s);
int main() {
  cout << remainingwords("string ssss www ee rew");
  return 0;
}

string remainingwords(string s){
  string todell;
  int i;
  for(i = 0; i < s.find(" "); i++){}
  todell = s.substr(i, s.length() - i);

  return todell;
}