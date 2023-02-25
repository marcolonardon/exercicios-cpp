#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

float bmimetricf(int weight, float height);
string bmiStatus (float bmi);

int main() {
  float weight, height;
  cout << "Please enter weight in kilograms: ";
  cin >> weight;
  cout << "Please enter height in meters: ";
  cin >> height;
  cout <<  endl;
  
  float bmi;
  string status;

  bmi = bmimetricf(weight, height);//50kg 1.58
  status = bmiStatus(bmi);
  cout << "BMI is: " << setprecision(4) << bmi << endl << "Status is: " << status << endl;
  
  return 0;
}

float bmimetricf(int weight, float height){
  float bmi;
  bmi = weight / (height*height);
  
  return bmi;
}

string bmiStatus(float bmi){
string status;
  
  if(bmi < 18.5)
    status = "Underweight";
  else if(bmi > 18.5 && bmi < 24.9)
    status = "Normal";
  else if(bmi > 25.0 && bmi < 29.9)
    status = "Overwight";
  else
    status = "Obese";
  
  return status;  
}


