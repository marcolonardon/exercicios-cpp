#include <iostream>
#include <string>
using namespace std;

float costPerMinute(string dayStarted, int timeStarted);
int main() {
  string dayStarted;
  int timeStarted, duration;
  
  cout << "Enter the day the call started at: ";//Fri
  cin >> dayStarted;
  cout << "\nEnter the time the call started at (hhmm): ";//2350
  cin >> timeStarted;
  cout << "\nEnter the duration of the call (in minutes): ";//22
  cin >> duration;

  cout << "\nThis call will cost $"<< costPerMinute(dayStarted, timeStarted) * duration << endl;//5.50

  
  return 0;
}

float costPerMinute(string dayStarted, int timeStarted){
  float perMinute;
  if(timeStarted >= 800 && timeStarted <= 1800){
    if(dayStarted != "Sat" && dayStarted != "Sun")
      perMinute = 0.4;
    else
      perMinute = 0.15;
    }
  else
    if (dayStarted != "Sat" && dayStarted != "Sun")
      perMinute = 0.25;
    else
      perMinute = 0.15;
    
  return perMinute;
}

/*• Any call started between 8:00 A.M. and 6:00 P.M., Monday through Friday, is
billed at a rate of $0.40 per minute.
• Any call starting before 8:00 A.M. or after 6:00 P.M., Monday through Friday, is
charged at a rate of $0.25 per minute.
• Any call started on a Saturday or Sunday is charged at a rate of $0.15 per
minute.
The input will consist of the day of the week, the time the call started, and the length
of the call in minutes.
The output will be the cost of the call.


Notes:
1. The time is to be input as 4 digit number, representing the time in 24-hour
notation, so the time 1:30 P.M. is input as 1330
2. The day of the week will be read as one of the following three character string:
‘Mon’, ‘Tue’, ‘Wed’, ‘Thr’, ‘Fri’, ‘Sat’ or ‘Sun’
3. The number of minutes will be input as a positive integer.*/