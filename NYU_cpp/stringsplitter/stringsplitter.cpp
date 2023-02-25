#include <iostream>
#include <string>
using namespace std;

string middleChar(string str);
string firstHalf(string str);
string secondHalf(string str);
int main() {
  string str;
  cout << "Enter an odd length string: ";//Fortune favors the bold
  getline(cin, str);
  if (str.length() % 2 <= 0){
    cout << "\nInvalid string.";
    return 0;
  }
    

  cout << "Middle character: "<< middleChar(str);//o
  cout << "\nFirst half: "<< firstHalf(str);//Fortune fav
  cout << "\nSecond half: "<< secondHalf(str);//rs the bold
  
  return 0;
}

string middleChar(string str){
  string middle;
  int i;
  i = (str.length() / 2);
  middle = str[i];
  return middle;
}

string firstHalf(string str){//usando loop
  int i, ind;
  string first;
  i = (str.length() / 2);
  for (ind = 0; ind < i; ind++){
    first = first + str[ind];
  }
  return first;
}

string secondHalf(string str){//usando slicing
  int i;
  string second;
  i = (str.length() / 2) + 1;
  second = str.substr(i, str.length());
  return second;
}
/*Read from the user a string containing 
odd number of characters. Your program should: 
a) Print the middle character. 
b) Print the string up to but not including the middle character (i.e., the first half 
of the string). 
c) Print the string from the middle character to the end (not including the 
middle character). 

Sample output: 
Enter an odd length string: Fortune favors the bold
Middle character: o
First half: Fortune fav
Second half: rs the bold*/