/*
CS16 lab01 pratice
CY Xu
*/

#include <cstdlib>
#include <iostream>
using namespace std;

// Using Leibniz formula to generate decimals after of PI
double decimals = 0;
double guessPi(int n);

int main() {
  int n;
  while (n != -1) {
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
  for (int i = 0; i < n + 1; i++) {
    decimals += ((-1 ^ i) / (2 * i + 1));
  }
  decimals = 4 * decimals;
  return decimals;
}
