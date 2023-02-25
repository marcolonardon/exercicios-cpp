#include <iostream>
using namespace std;

int dollars, cents;
double vQ, vD, vN, vP, total, calc, rest;
int main() {
  cout << "Please enter the amount of money to convert: ";
  cout << "\n# of dollars: ";//2
  cin >> dollars;
  cout << "\n# of cents: ";//37
  cin >> cents;
  //result = 9 q, 1 d, 0 n and 2p.

  total = dollars + ((double)cents /100.0);
  vQ = total/0.25;
  vQ = (int)vQ;

  calc = vQ * 0.25;
  rest = total - calc;
 
  vD = rest/0.10;
  vD = (int)vD;

  calc = vD * 0.10;
  rest = rest - calc;

  vN = rest/0.05;
  vN = (int)vN;

  calc = vN * 0.05;
  rest = rest - calc;

  vP = rest/0.01;
  
  
  cout << "\n\nThe coins are "<<vQ<<" quarters, "<<vD<<" dimes, "<<vN<<" nickels and "<<vP<<" pennies";

  
return 0;  
}