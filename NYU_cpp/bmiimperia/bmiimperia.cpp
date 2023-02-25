#include <iostream>
#include <iomanip>
using namespace std;
const double VP = 0.453592, VI = 0.0254;

double pounds, inches, bmi, meters, kilograms;

int main() {//135 pounds, 71 inches result = 18.83
cout << "Please enter weight in pounds: ";
cin >> pounds;
  
cout << "\nPlease enter height in inches: ";
cin >> inches;
  
kilograms = pounds * VP;
meters = inches * VI;  
  
bmi = kilograms/(meters*meters);  
  
cout << "\nBMI is: "<<setprecision (4)<<bmi;


  
return 0;
}