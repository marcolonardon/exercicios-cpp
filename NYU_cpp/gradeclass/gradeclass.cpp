#include <iostream>
using namespace std;

double grade1, grade2;
int main() {
  cout << "Please enter 2 grades, separated by a space: ";
  cin >> grade1>>grade2;

  if (grade1 < 60 && grade2 <60)
    cout << "\nStudent Failed:(";
  else if (grade1 >= 95 && grade2 >=95)
    cout << "\nStudent Graduated with Honors";
  else
    cout << "\nStudent Gradueted!";


return 0;    
}