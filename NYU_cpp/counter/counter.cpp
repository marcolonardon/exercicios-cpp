#include <iostream>
using namespace std;

double total, nPennies, nNickels, nDimes, nQuarters, x;
int dollar, cents;

int main() {
  cout << "Please enter the number of coins: "<<endl;
  cout << "\n# of quarters: ";//20
  cin >> nQuarters;
  cout << "\n# of dimes: ";//4
  cin >> nDimes;
  cout << "\n# of nickels: ";//13
  cin >> nNickels;
  cout << "\n# of pennies: ";//17
  cin >> nPennies;
  // result = 6 dollars and 22 cents

  total = nPennies * 0.01 + nNickels * 0.05 + nDimes * 0.1 + nQuarters * 0.25;
  dollar = (int)total;
  x = total - dollar;
  cents = x * 100;


  cout << "\nThe total is "<<dollar<<" dollars and "<<cents<<" cents."<<endl;

return 0;
}