#include <iostream>
using namespace std;

int main()
{
  int input, lastInput;
  int min, max;

  cout << "Initial input: ";
  cin >> input;
  lastInput = input;
  min = input;
  max = input;

  int repeatCounter = 1;
  while(repeatCounter < 3)
  {
    cout << "Input: ";
    cin >> input;
    if(input == lastInput)
    {
      repeatCounter++;
    }
    else
    {
      repeatCounter = 1;
    }

    if(input < min)
    {
      min = input;
    }

    if(input > max)
    {
      max = input;
    }

    lastInput = input;
  }

  cout << "Min = " << min << endl;
  cout << "Max = " << max << endl;

  return 0;
}
