#include <iostream>
#include <iomanip>
using namespace std;

float bmimetricf(int weight, float height);
int main() {
  cout << "BMI is: "<< bmimetricf(50, 1.58);
  return 0;
}

float bmimetricf(int weight, float height){
  double bmi;
  bmi = weight / (height*height);
  cout<<setprecision(4)<<bmi;
  cin >> bmi;
  return bmi;
}