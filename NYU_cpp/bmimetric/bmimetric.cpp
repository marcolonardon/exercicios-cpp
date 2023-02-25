#include <iostream>
#include <iomanip>
using namespace std;

int main() {//50 kg, 1.58m result = 20.03
double weight, height, bmi;
  cout << "Please enter weight in kilograms: ";
  cin >> weight;
  
  cout << "\nPlease enter height in meters: ";
  cin >> height;

  bmi = weight/(height*height);
  
  cout << "\nBMI is: "<<setprecision (4)<<bmi;


return 0;
}