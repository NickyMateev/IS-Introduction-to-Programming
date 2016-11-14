#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "n = ";
  cin >> n;

  int digit;
  bool isPrime = false;
  while(n > 0)
  {
    isPrime = false;

    digit = n % 10;
    for(int i = 2; i < digit; i++)
    {
      if(digit % i == 0)
      {
        break;
      }

      if(i == digit -1)
      {
        isPrime = true;
      }
    }

    if(isPrime)
    {
      break;
    }

    n /= 10;
  }

  if(isPrime == true)
  {
    cout << "Yes. The number contains a prime digit.\n";
  }
  else
  {
    cout << "No. The number does not contain a prime digit.\n";
  }

  return 0;
}
