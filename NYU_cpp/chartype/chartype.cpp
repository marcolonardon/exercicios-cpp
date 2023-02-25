#include <iostream>
#include <string>
using namespace std;

string charType(char ch);
int main() {
  char character;
  cout << "Enter a character: ";
  cin >> character;

  cout << endl << character << charType(character);
  
  return 0;
}

string charType(char ch){
  string classType;
  if (ch >= 'a' && ch <= 'z')
    classType = " is a lower case letter.";
  else if (ch >= 'A' && ch <= 'Z')
    classType = " is a upper case letter.";
  else if (ch >= '0' && ch <= '9')
    classType = " is a digit.";
  else 
    classType = " is a non-alphanumeric character.";

  return classType;
}
/*Write a program that  reads a character (string of  length  1)  from  the 
user, and classifies it to  one of the following: lower case letter, upper case letter, 
digit,  or non-alphanumeric character 

Sample  output (4 different executions):  
Enter a character: j
j is  a lower case  letter.
Enter a character: 7
7 is  a digit.
Enter a character: ^
^ is  a non-alphanumeric  character.
Enter a character: C
C is  an  upper case  letter.*/