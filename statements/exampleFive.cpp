
/*
  Write a program to print the value if it is divisible by 3 or 5
*/

#include <iostream>
using namespace std;

int main()
{

  int num;
  cin >> num;

  if ((num % 3 == 0) || (num % 5 == 0))
  {
    cout << num << endl;
  }

  return 0;
}