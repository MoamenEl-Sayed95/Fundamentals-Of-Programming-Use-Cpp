/*
  Control Flow
  - If ... else if ... else

  Syntax
  if (Condition Is True)
  {
    // Do Something
  }
*/

#include <iostream>
using namespace std;

int main()
{
  int age = 15;
  int points = 450;
  int rank = 4;

  if (age >= 18)
  {
    cout << "Welcome Your Age Is Ok\n";
  }
  else if (points > 500)
  {
    cout << "Welcome Your Points Is Ok\n";
  }
  else if (rank > 5)
  {
    cout << "Welcome Your Rank Is Ok\n";
  }
  else
  {
    cout << "Iam Sorry\n";
  }

  return 0;
}