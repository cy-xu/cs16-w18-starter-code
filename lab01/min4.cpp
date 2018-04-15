/*
Code originally by P. Conrad, 2016
Code modified   by Z. Matni, Oct. 2016
*/
#include <cstdlib>
#include <iostream>
using namespace std;

int smallest_of_two(int num1, int num2);  // returns smaller number

int main(int argc, char *argv[]) {
  if (argc != 5) {
    cerr << "Usage: " << argv[0] << " num1 num2 num3 num4" << endl;
    cerr << " Prints smaller of the four numbers" << endl;
    exit(1);
  }

  int record = *argv[1];
  int i = 1;

  while (i < argc - 1) {
    int a = atoi(argv[i]);
    int b = atoi(argv[i + 1]);
    int curr = smallest_of_two(a, b);

    if (record > curr) record = curr;
    i++;
  }

  cout << record << endl;

  return 0;
}

int smallest_of_two(int num1, int num2) {
  if (num1 < num2) return num1;
  return num2;
}