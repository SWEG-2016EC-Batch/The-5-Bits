#include <iostream>

using namespace std;

int main () {
  float x, result = 1;
  int y;

  cout << "Power Calculator" << endl;

  cout << "Input the base: ";
  cin >> x;
  cout << "Enter the exponent: ";
  cin >> y;

  if (x == 0 && y == 0) {
    cout << "x the power of y (x^y) = undefined" << endl;
    return 0;
  }

  if (y > 0) {
    while (y > 0) {
      result *= x;
      y--;
    }
  } else if (y < 0) {
    while (y < 0) {
      result *= 1/x;
      y++;
    }
  }

  cout << "x the power of y (x^y) = " << result << endl;
}
