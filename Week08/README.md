# Week 08
## Functions
### What are functions?
A function is just a piece of code that we write once and then can later reuse whenever we need to. Functions help us in structuring our code into understandable and reusable pieces of code.

### Structure of a function:
**returnType** *name*([**parameter 1, parameter 2, ..., parameter n**])<br/>
{   <br/>
    <i>statements</i>;
    <br/>
    return <b>typeValue</b>;
    <br/>
}

Where:
 * **returnType** - the type of the data returned by the function after it's done(ex: *int, double, char, etc.*);
 * *name* - the name of the function; can be whatever you want;
 * [**parameter 1, parameter 2, ..., parameter n**] - (as many parameters as needed): Each parameter consists of a type followed by a name, with each parameter being separated from the next by a comma. Each parameter looks just like a regular variable declaration (ex.: int x), and in fact acts within the function as a regular variable which is local to the function. The purpose of parameters is to allow passing arguments to the function from the location where it is called from.
 * *statements* - the code which actually gets executed when the function is called
 * **typeValue** - the value returned from the function after it's done; the value must match the type specified by the **returnType** of the function.

Examples:

```c++
int sum(int a, int b)
{
    return a + b;
}

double abs(double num)
{
    if(num < 0)
    {
        return num * (-1);
    }

    return num;
}

// kind of useless function, but it serves to show that you can have 0 parameters defined for a function
double getPI()
{
    return 3.14;
}

int getDiscriminant(int a, int b, int c)
{
    int D = (b*b) - (4 * a * c);
    return D;
}

int getMax(int x, int y)
{
    if(x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

bool isLargerThan100(int num)
{
    if(num > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}
```

**NOTE**: Notice how **ALL** functions have the keyword **return** in them at some point. The word **return** tells a function when to stop executing, but we have to pass a *value* after the **return**, which corresponds to the **returnType** we've specified for the function.

Those were some examples of declaring and defining functions. Now let's see how we can call functions:

```c++
#include <iostream>
using namespace std;

int getMax(int x, int y)
{
    if(x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int sum(int x, int y)
{
    return (x + y);
}

int main()
{
    int x = 2;
    int y = 3;
    int c = getMax(a,b); // the function will return 3, and then 3 will be assigned to c

    int d = sum(y, c); // the function will return 6 and that value will be assigned to d

    // This is valid also:
    cout << getMax(sum(x,y), sum(c,d)) << endl;
    // first: sum(x,y) will return 5
    // second: sum(c,d) will return 9
    // third: the function getMax will be called with values 5 and 9, so the result will be 9 and that's what's going to get printed on the screen

    return 0;
}
```

### Functions which don't return anything(without return type)
Sometimes functions just aren't meant to return a value. That's why in C++ the keyword **void** exists; **void** is written in place of the **returnType** whenever we want to denote that a function won't return anything.

Example:
```c++
void printMessage()
{
    cout << "Hello World!" << endl;
}
```

Whenever we call this function, the "Hello World!" text will be printed to the screen and that's it - the function is done.

**NOTE:** Notice how there is no **return** keyword at the end of the function as opposed to all the other functions which always returned something.

Example usage of a void function:
```c++
#include <iostream>
using namespace std;

void printMessage(int numOfTimes)
{
    if(numOfTimes < 100)
    {
        for(int i = 0; i < numOfTimes; i++)
        {
            cout << "Hello World!" << endl;
        }
    }
    else
    {
        cout << "That's too much! I can't print this message " << numOfTimes << " times..." << endl;
    }
}

int main()
{
    printMessage(12); // will print to the sceen 12 times "Hello World!"
    printMessage(123); // will print to the screen "That's too much!...."

    ret
}
```

**NOTE:** Because the C++ compiler reads your file from top to bottom, it's necessary to define functions before they are actually used. That's why you should always define and declare your functions above your main method. If that's not to your liking, you can read up on [Declaring functions](http://www.cplusplus.com/doc/tutorial/functions/#declarations).
