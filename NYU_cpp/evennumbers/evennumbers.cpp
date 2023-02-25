#include <iostream>
using namespace std;

int n, counter;
int main() {
  cout << "Please enter a positive integer: ";
  cin >> n;

  while (n != 0){
    n--;
    counter +=2;
    cout <<endl<<counter<<endl;
    
  }



return 0;
}