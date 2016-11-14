#include <iostream>
using namespace std;

int main()
{
  int firstDigit = 1, secondDigit = 0, thirdDigit = 0;

  while(firstDigit != 10)
  {
    if(firstDigit != secondDigit && secondDigit != thirdDigit && firstDigit != thirdDigit)
    {
      cout << firstDigit << secondDigit << thirdDigit << endl;
    }

    if(secondDigit == 9 && thirdDigit == 9)
    {
      secondDigit = 0;
      thirdDigit = 0;

      firstDigit++;
    }

    if(thirdDigit == 9)
    {
      thirdDigit = 0;

      secondDigit++;
    }

    thirdDigit++;
  }

  return 0;
}
