/*
  Primitive Data Types

  - bool => Boolean
  --- Only Two Possible Values [true, false]
  --- Value Is Case Sensitive
  --- When We Use Boolean Values
  ------ Anything Has On/Off, Yes/No, True/False
  --- Test Boolean In Math
  --- Test > And <
  --- Test Data [100, 0, -100, ""]

  - void => Valueless
  --- Without Value
*/

#include <iostream>
using namespace std;

void without_value()
{
  // Nothing To Return
}

int main()
{
  bool is_open = true;
  cout << is_open + 10 << endl;        // 1 + 10 = 11
  cout << true + true + false << endl; // 1 + 1 + 0 = 2
  bool test_one = 10 > 5;              // Yes => True => 1
  bool test_two = 10 > 100;            // No => False => 0
  cout << test_one << endl;            // 1
  cout << test_two << endl;            // 0
  int num = 1;
  cout << sizeof(test_one) << endl; // 1 Byte
  cout << sizeof(num) << endl;      // 4 Bytes
  bool num_one = 100;
  bool num_two = -100;
  bool num_three = 0;
  cout << num_one << endl;   // 1
  cout << num_two << endl;   // 1
  cout << num_three << endl; // 0
  return 0;
}