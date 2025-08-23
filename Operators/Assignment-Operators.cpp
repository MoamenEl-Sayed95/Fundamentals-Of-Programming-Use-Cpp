/*
  Operators & Operands
  "Symbols To Operate On Data"

  - Assignment Operators
  "For Assigning Operations"

  --- = Assign
  --- += Addition
  --- -= Subtraction
  --- *= Multiplication
  --- /= Division
  --- %= Modulo => Remainder After Division
*/

#include <iostream>
using namespace std;

int main()
{
  cout << 4 % 2 << "\n";  // 0
  cout << 6 % 2 << "\n";  // 0
  cout << 8 % 2 << "\n";  // 0
  cout << 11 % 2 << "\n"; // 1

  int a = 10;
  // a = a + 10;        // a = 10 + 10 = 20
  a += 10; // a = 10 + 10 = 20
  // a = a + 10
  // a += 10
  cout << a << "\n"; // 20

  int b = 20;
  // b = b - 10; // b = 20 - 10 = 10
  b -= 10; // b = b - 10
  cout << b << "\n";

  int c = 5;
  // c = c * 10; // c = 5 * 10 = 50;
  c *= 10; // c = c * 10
  cout << c << "\n";

  return 0;
}