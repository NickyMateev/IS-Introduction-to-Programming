#include <iostream>
using namespace std;

int main()
{
  int x, y;
  cout << "x = ";
  cin >> x;
  cout << "y = ";
  cin >> y;

  int dividerSumX = 0, dividerSumY = 0; // notice that we set values 0 immediately

  for(int i = 1; i < x; i++)
  {
    if(x % i == 0)
    {
      dividerSumX += i;
    }
  }

  for(int i = 1; i < y; i++)
  {
    if(y % i == 0)
    {
      dividerSumY += i;
    }
  }

  if((dividerSumX == y) && (dividerSumY == x))
  {
    cout << "X and Y are friendly numbers!" << endl;
  }
  else
  {
    cout << "X and Y are NOT friendly numbers!" << endl;
  }

  return 0;
}
