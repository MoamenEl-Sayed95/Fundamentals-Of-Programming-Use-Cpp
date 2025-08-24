/*
  Control Flow
  - Nested If Conditions
*/

#include <iostream>
using namespace std;

int main()
{
  int age = 25;
  int points = 1500;

  if (age >= 18)
  {
    cout << "Welcome Your Age Is OK\n";
    if (points >= 1000)
    {
      cout << "You Are VIP\n";
    }
  }

  return 0;
}