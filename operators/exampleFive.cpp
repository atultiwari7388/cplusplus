/*

  Bitwise operator

*/

#include <iostream>
using namespace std;

int main()
{

  int numOne = 5;                // 0101
  cout << (numOne << 1) << endl; // 10
  cout << (numOne >> 1) << endl; // 2

  int numTwo = 8;                    // 1000
  cout << (numOne & numTwo) << endl; // 0
  cout << (numOne | numTwo) << endl; // 1101 => 13

  return 0;
}