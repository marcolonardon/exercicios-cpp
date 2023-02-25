#include <iostream>
using namespace std;

int year = 1989;
int main() {
  switch (year % 4){
    case 0:
      if (year % 100 > 0){
        cout <<endl<<year<< " was a leap year";
      
      }
      else if (year % 400 != 0)
        cout <<endl<<year<< " was not a leap year";
       
      else
        cout <<endl<<year<< " was a leap year";
    
    break;

    case !0:
      cout <<endl<<year<< " was not a leap year";
      break;
    
  }
  
  
  return 0;
}