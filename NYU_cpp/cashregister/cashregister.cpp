#include <iostream>
#include <iomanip>
using namespace std;

void halfOfPrice (float &price1, float &price2);
void cardMember (string cardCondition, float& total);
void addTax (float& sum, float tax);

int main() {
  float price1, price2, taxRate, sum;
  string cardCondition;
  
  cout << "Enter the price of the first item: ";//10
  cin >> price1;
  
  cout << endl <<"Enter the price of the second item: ";//20
  cin >> price2;
  
  cout << endl << "Does customer have a club card? (Y/N): ";//y
  cin >> cardCondition;
  
  cout << endl << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";//8.25
  cin >> taxRate;

  cout<< endl << "Base price: "<< price1 + price2;
  
  halfOfPrice(price1, price2);
  sum = price1 + price2;
  cardMember(cardCondition, sum);
  cout << endl << "Price after discounts: "<< setprecision(4) << sum;
  
  addTax(sum, taxRate);
  cout << endl << "Total price: "<< setprecision(4) << sum;//24.36
  
  return 0;

}

void halfOfPrice (float& price1, float& price2){
  if (price1 < price2)
    price1 = price1 / 2;
  else price2 = price2 / 2;

}

void cardMember (string cardCondition, float& total){
  if(cardCondition == "y" || cardCondition == "Y" || cardCondition == "yes" || cardCondition == "YES" || cardCondition == "Yes")
    total = total - (total*0.1);

}

void addTax(float& sum, float tax){
  tax = tax / 100;
  sum = sum + (sum * tax);

}

/*The price is calculated according to the following rules:
• Buy one get one half off promotion: the lower price item is half price.
• If the customer is a club card member, additional 10% off.
• Tax is added.


Inputs to the program include:
• Two items’ prices
• Have club card or not (User enters ‘Y’ or ‘y’ for “yes”; ‘N’ or ‘n’ for “no”)
• Tax rate (User enters the percentage as a number; for example, they enter
8.25 if the tax rate is 8.25%)


Program displays:
• Base price - the price before the discounts and taxes
• Price after discounts - the price after the buy one get one half off promotion
and the member’s discount, if applicable
• Total price – the amount of money the customer has to pay (after tax)
printed with the precision of 2 decimal digits.


Hint: In order to print a number in a specific precision, you can use the round
function passing 2 arguments to it. To format to two decimal places you can use the printf function with the format of 2.2f.

For example, an execution could look like this:

Enter price of the first item: 10
Enter price of the second item: 20
Does customer have a club card? (Y/N): y
Enter tax rate, e.g. 5.5 for 5.5% tax: 8.25
Base price = 30.00
Price after discounts = 22.50
Total price = 24.36 */