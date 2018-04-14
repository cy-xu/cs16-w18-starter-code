/*
CS16 lab01 pratice
CY Xu
*/

#include <cstdlib>
#include <iostream>
using namespace std;

void makeBlock(int row, int col) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << "x.";
    }
    cout << endl;
  }
}

int main() {
  int row = 1, col = 1;
  while (row != 0 && col != 0) {
    cout << "Enter number o frows and columns:" << endl;
    cin >> row >> col;
    makeBlock(row, col);
  }
}