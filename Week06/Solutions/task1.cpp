#include <iostream>
using namespace std;

int main()
{
  int n;
  char a,b;

  cout << "n = ";
  cin >> n;
  cout << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;

  int counterA, counterB;

  cout << "\nResult: " << endl;
  for(int i = 1; i <= n - 1; i++)
  {
    counterA = i;
    counterB = n - i;

    while(counterA > 0)
    {
      cout << a;
      counterA--;
    }

    while(counterB > 0)
    {
      cout << b;
      counterB--;
    }

    cout << '\n'; // new line
  }

  return 0;
}
