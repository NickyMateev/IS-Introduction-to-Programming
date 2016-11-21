#include <iostream>
using namespace std;

const int SIZE = 100;
const int ROWS = 2;
const int COLS = 3;

// prints a message a certain number of times
void printMessage(int numOfTimes)
{
  for(int i = 0; i < numOfTimes; i++)
  {
    cout << "Hello World!" << endl;
  }
}

// functions, which initializes an array's elemets:
void initArray(int arr[], int size)
{
  for(int i = 0; i < size; i++)
  {
    cout << "arr[" << i << "] = ";
    cin >> arr[i];
  }
}

// functions, which prints an array's elemets:
void printArray(int arr[], int size)
{
  for(int i = 0; i < size; i++)
  {
    cout << "arr[" << i << "] = " << arr[i] << endl;
  }
}
//
// functions, which initializes a multidimensional array's elemets:
void initMultiArray(int arr[][COLS], int rows, int cols)
{
  for(int i = 0; i < rows; i++)
  {
    for(int j = 0; j < cols; j++)
    {
      cout << "arr[" << i << "][" << j << "] = ";
      cin >> arr[i][j];
    }
    cout << endl;
  }
}

// functions, which prints a multidimensional array's elemets:
void printMultiArray(int arr[][COLS], int rows, int cols) // notice how all but the first pair of brackets have to be specified with size
{
  for(int i = 0; i < rows; i++)
  {
    for(int j = 0; j < cols; j++)
    {
      cout << arr[i][j] << "  ";
    }
    cout << endl;
  }
}

// function which finds the power of a number:
double pow(double x, int y)
{
  double num = 1;
  for(int i = 0; i < y; i++)
  {
    num *= x;
  }

  return num;
}

int main()
{
  // demonstrating the printMessage function:
  printMessage(10);

  // demonstrating the initArray and printArray functions:
  int arr[SIZE];
  int numOfElements;
  cout << "\nHow many number of elements do you want: ";
  cin >> numOfElements;

  cout << "Entering the array elements:" << endl;
  initArray(arr, numOfElements);
  cout << "\nPrinting the array elements:" << endl;
  printArray(arr, numOfElements);
  cout << endl;

  // demonstating the initMultiArray and printMultiArray functions:
  int matrix[ROWS][COLS];
  cout << "Entering the multidimensional array's elements:" << endl;
  initMultiArray(matrix, ROWS, COLS);

  cout << "\nPrinting the multidimensional array's elements:" << endl;
  printMultiArray(matrix, ROWS, COLS);
  cout << endl;

  // demonstarting the pow function:
  double result = pow(2,3);
  cout << "Result: " << result << endl;


  return 0;
}
