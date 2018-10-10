#include <iostream>

using namespace std;


int max(int a, int b)
{
    if( a < b)
    {
        return b;
    } else
    {
        return a;
    }
}

int Abs(int number)
 {
    if(number < 0)
    {
        return number*(-1);
    }
    cout << "Nicky e bog";
    return number;
    cout << "Nicky e bog";

 }

 double pow(double x, int y)
 {
    double result = 1;
    for(int i = 0; i < y; i++)
    {
        result *= x;
    }
    if(y > 0)
    {

        return result;
    } else
    {
        return 1 / result;
    }
 }

 bool isAlpha(char ch)
 {
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        return true;
    }
    return false;
 }
int main()
{

    int x = -55, y = 7, c = 10;

    cout << isAlpha('A');
    return 0;
}


