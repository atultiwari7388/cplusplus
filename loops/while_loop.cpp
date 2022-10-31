/*

  Print the sum of the first n natural numbers, where n is the input.

*/

#include <iostream>
using namespace std;

int main()
{

  int num;
  cin >> num;

  int sum = 0;

  int i = 1; // loop variable

  while (i <= num) // condition
  {
    sum += i;
    i++; // updating loop variable
  }

  cout << sum << endl;

  return 0;
}