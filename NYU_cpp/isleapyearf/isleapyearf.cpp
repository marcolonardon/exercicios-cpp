#include <iostream>
using namespace std;

bool isleapyear(int inyear);
int main() {
  int mybirthyear = 800;
  if (isleapyear(mybirthyear) == true)
    cout << mybirthyear << " was a isleap year.";
  else
    cout << mybirthyear << " was not a isleap year.";
  
  return 0;
}

bool isleapyear(int inyear){
  if(inyear % 4 == 0 && inyear % 100 != 0 && inyear % 400 != 0)
    return true;
  else if(inyear % 100 == 0 && inyear % 400 == 0)
    return true;
  else
    return false;
}
  