/*
CS16 lab01 pratice
CY Xu
*/

#include <math.h>
#include <cstdlib>
#include <iostream>
using namespace std;

/*
cout.setf(ios::fixed); 	   // Display in fixed point notation. For example,
display 1e-1 as 0.1

cout.setf(ios::showpoint); // Always display the decimal
point.

cout.precision(3);         // Set the number of digits to display after
the decimal point to 3
*/

// Using Leibniz formula to generate decimals after of PI
double guessPi(int n);

int main() {
  int n;
  while (n != -1) {
    cout.precision(3);
    cout
        << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 "
           "to quit):"
        << endl;
    cin >> n;

    cout << "The approximate value of pi using 1 term is: " << guessPi(n)
         << endl;
  }
}

double guessPi(int n) {
  double decimals = 0;
  for (int i = 0; i < n + 1; i++) {
    decimals += (pow(-1, i) / (2 * i + 1));
  }
  decimals = 4 * decimals;
  return decimals;
}
