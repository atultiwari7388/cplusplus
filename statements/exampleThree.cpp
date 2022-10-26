/*


  Ternary Operator

*/

#include <iostream>
using namespace std;

int main()
{

  int mark;
  cin >> mark;

  mark > 33
      ? cout << "Passed" << endl
      : cout << "Fail" << endl;

  return 0;
}