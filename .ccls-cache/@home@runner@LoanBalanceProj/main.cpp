#include <iostream>
using namespace std;
#include <cmath>

int main() {

long double beforeMinus;
long double numerator;
long double denominator;

int t;
long double b;
long double a;
int n;
long double r;
long double p;

cout << fixed;
cout.precision(2);
cout << endl;

cout << "Amount borrowed: $";
cin >> a;
cout << endl;

cout << "Number of payments per year: ";
cin >> n;
cout << endl;

cout << "Amount paid per payment: ";
cin >> p;
cout << endl;

cout << "Annual percentage rate (APR): " ;
cin >> r;
cout << endl;

t = 1; 

beforeMinus = (a * pow((1 + r/n)  , (n * t)));
numerator = (pow((1 + r/n) , (n * t)) - 1);
denominator = (( 1 + r/n) -1);

b = beforeMinus  - p * (numerator / denominator) ;

cout << "Balance after 1 year: $" << b << endl;
cout << endl;

t = 5;
  
beforeMinus = (a * pow((1 + r/n)  , (n * t)));
numerator = (pow((1 + r/n) , (n * t)) - 1);
denominator = (( 1 + r/n) -1);

b = beforeMinus  - p * (numerator / denominator) ;

cout << "Balance after 5 years: $" << b << endl;
cout << endl;
  
t = 10;
  
beforeMinus = (a * pow((1 + r/n)  , (n * t)));
numerator = (pow((1 + r/n) , (n * t)) - 1);
denominator = (( 1 + r/n) -1);

b = beforeMinus  - p * (numerator / denominator) ;

cout << "Balance after 10 years: $" << b << endl;
cout << endl; 
  
t = 20;
  
beforeMinus = (a * pow((1 + r/n)  , (n * t)));
numerator = (pow((1 + r/n) , (n * t)) - 1);
denominator = (( 1 + r/n) -1);

b = beforeMinus  - p * (numerator / denominator) ;

cout << "Balance after 20 years: $" << b << endl;
cout << endl; 

t = 30;
  
beforeMinus = (a * pow((1 + r/n)  , (n * t)));
numerator = (pow((1 + r/n) , (n * t)) - 1);
denominator = (( 1 + r/n) -1);

b = beforeMinus  - p * (numerator / denominator) ;

cout << "Balance after 30 years: $" << b << endl;
cout << endl; 
  
return 0;
}