/*
  Control Flow
  - Switch Trainings
  --- Award System Application
  --- Discount Application
  --- Simple Calculator Application
*/

#include <iostream>
using namespace std;

int main()
{
  // App 1 => Award System Application

  int num;
  cout << "Type The Number\n";
  cin >> num;

  switch (num)
  {
  case 100:
  case 110:
  case 120:
    cout << "Congratz For The iPhone";
    break;
  case 200:
    cout << "Congratz For The iPad";
    break;
  case 300:
    cout << "Congratz For The TV";
    break;
  case 400:
    cout << "Congratz For The KeyChain";
    break;
  default:
    cout << "No Award For This Number";
  }

  // App 2 => Discount Application

  int price = 100;
  int discount = 10;
  int years;
  cout << "Type The Number Of Years in Company\n";
  cin >> years;

  switch (years)
  {
  case 1:
    discount = 20;
    break;
  case 2:
    discount = 40;
    break;
  case 3:
    discount = 80;
    break;
  }

  cout << "The Price Is " << price - discount << "\n";

  // App 3 => Simple Calculator

  int n1, n2, op;
  cout << "Type Number One\n";
  cin >> n1;
  cout << "Type Number Two\n";
  cin >> n2;
  cout << "Choose Operation Number\n";
  cout << "[1] +\n";
  cout << "[2] -\n";
  cout << "[3] /\n";
  cout << "[4] *\n";
  cin >> op;

  if (op == 1)
  {
    cout << n1 + n2 << "\n";
  }
  else if (op == 2)
  {
    cout << n1 - n2 << "\n";
  }
  else if (op == 3)
  {
    cout << n1 / n2 << "\n";
  }
  else if (op == 4)
  {
    cout << n1 * n2 << "\n";
  }
  else
  {
    cout << "Operation Is Not Valid\n";
  }

  switch (op)
  {
  case 1:
    cout << n1 << " + " << n2 << " = " << n1 + n2 << "\n";
    break;
  case 2:
    cout << n1 << " - " << n2 << " = " << n1 - n2 << "\n";
    break;
  case 3:
    cout << n1 << " / " << n2 << " = " << n1 / n2 << "\n";
    break;
  case 4:
    cout << n1 << " * " << n2 << " = " << n1 * n2 << "\n";
    break;
  default:
    cout << "Operation Is Not Valid\n";
  }

  return 0;
}