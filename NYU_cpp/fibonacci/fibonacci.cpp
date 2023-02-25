#include <iostream>
using namespace std;

int n,fib, vI=1, vF;
int main() {
  cout << "Please enter a positive integer greater than 1: ";
  cin >> n;

  while (n > 0){
    n--;
    fib = vI + vF;
    vI = vF;
    vF = fib;
    cout<< fib<<endl;
  }
  
return 0;  
}


/*
code by chat gpt.

Copy code
#include <iostream>

int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    std::cout << "The fibonacci number at position " << n << " is " << fib(n) << std::endl;
    return 0;
}
*/