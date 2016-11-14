#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "n = ";
  cin >> n;

  int lowerBound = 3, higherBound = 7;

  bool areInInterval = true;
  int digit;
  while(n > 0)
  {
    digit = n % 10;
    if(digit < lowerBound || digit > higherBound)
    {
      areInInterval = false;
      break;
    }

    n /= 10;
  }

  if(areInInterval)
  {
    cout << "Yes, all the digits are in the interval." << endl;
  }
  else
  {
    cout << "No, not all the digits are in the interval." << endl;
  }

  return 0;
}
