#include <iostream>
using namespace std;

int v1, v2, v3, v4, nEvens;
int main() {
  cout << "Please enter 4 positive integers, separated by a space: ";
  cin >> v1>>v2>>v3>>v4;

  if (v1 % 2 == 0)
    nEvens ++;
  if (v2 % 2 == 0)
    nEvens ++;
  if (v3 % 2 == 0)
    nEvens ++;
  if (v4 % 2 == 0)
    nEvens ++;

  if (nEvens > 2)
    cout << "\nMore evens.";
  else if (nEvens == 2)
    cout << "\nSame number of enves and odds.";
  else
    cout <<"\nMore odds.";
  
  
  
  
  return 0;  
}