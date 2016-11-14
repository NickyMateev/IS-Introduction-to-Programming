#include <iostream>
using namespace std;

int main()
{
  int input;
  cout << "n = ";
  cin >> input;

  int inputSq = input * input;
  cout << "n^2 = " << inputSq << endl;

  bool isAutomorphic = true;
  int digitA, digitB;
  while(input > 0)
  {
   digitA = input % 10;
   digitB = inputSq % 10;

   if(digitA != digitB)
   {
    isAutomorphic = false;
   }

   input /= 10;
   inputSq /= 10;
  }

  if(isAutomorphic)
  {
    cout << "The input is automorphic!" << endl;
  }
  else
  {
    cout << "The input is not automorphic!" << endl;
  }

  return 0;
}
