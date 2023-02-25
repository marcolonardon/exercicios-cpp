#include <iostream>
using namespace std;

float avgoflst(int lst[], int size);
int main() {

  int lst[] = {19, 2, 20, 1, 0, 18};
  avgoflst(lst, 6);
  
  return 0;
}

float avgoflst(int lst[], int size){
  int i, sum=0;
  float average;
  for(i = 0; i < size; i++){
    sum += lst[i];  
  }

  average = (float)sum / (float)size;
  cout << average;
  return average;
}