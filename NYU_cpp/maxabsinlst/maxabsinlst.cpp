#include <iostream>
using namespace std;

int maxabsinlst(int lst[], int size);

int main() {
  int lst[] = {-19, -3, 20, -1, 5, -25};
  maxabsinlst(lst, 6);
  return 0;
}

int maxabsinlst(int lst[], int size){
  int i, v;
  v = lst[0];
  for (i = 0; i < size; i++){
    if(lst[i] < 0)
      lst[i] *= (-1);
      if(lst[i] >= v)
        v = lst[i];
      
  }
  cout << v;
  return v;
} 

