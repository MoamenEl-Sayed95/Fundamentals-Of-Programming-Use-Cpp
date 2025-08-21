/*
  Data Types
  - Type Conversion
  --- Convert Data of One Type To Another

  - Implicit Conversion
  --- Conversion Is Done Automatically By The Compiler

  - Explicit Conversion AKA Type Casting
  --- Conversion Is Done By The Programmer

  - Data Loss
  --- When Larger Type Is Converted To Smaller Type
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "=====================\n";
  int a;
  double b = 20.5;
  a = b;                     // Compiler Will Convert Double Value Then Assign
  cout << a << "\n";         // 20
  cout << sizeof(a) << "\n"; // 4 Bytes
  cout << "=====================\n";

  cout << "=====================\n";
  char c = 'C';
  int d = 20;
  cout << int(c) << "\n"; // 67
  cout << c + d << "\n";  // 67 + 20 = 87
  cout << "=====================\n";

  cout << "=====================\n";
  int e = 20;
  double f = 20.5;
  cout << e + f << "\n";         // 20.5 + 20 = 40.5
  cout << sizeof(e + f) << "\n"; // 8 Bytes
  cout << "=====================\n";

  cout << "=====================\n";
  int g = 20;
  double h = 20.5;
  cout << g + (int)h << "\n";         // 20 + 20 = 40
  cout << g + int(h) << "\n";         // 20 + 20 = 40
  cout << sizeof(g + (int)h) << "\n"; // 4 Bytes
  cout << sizeof(g + int(h)) << "\n"; // 4 Bytes
  cout << "=====================\n";
  return 0;
}