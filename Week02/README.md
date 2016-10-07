# Week 02

## What's a computer program?

A computer program is simply **a sequence of instructions that are executed by the computer**.
Programming languages like **C++** allow us to write such instructions(*code*). With the help of a program called a *compiler* we can convert our code into machine code understandable by the CPU. After our code is compiled we can run it and see the result of our program.

## Structure of a basic C++ program:
This is called the **main function**:

```c++
int main()
{

  return 0;
}
```

**Every program** has to have a main function. That's where our program starts execution. We'll study functions in C++ later on, but for now just remember that every program we'll write from now on has to have a main function written as it is in the code snippet above. The code we will be writing will be placed somewhere between **the opening bracket** and the **return 0;** statement.

## Printing to the screen:
Whenever we want to print something to the screen or want to take some input from the keyboard from the user, we first have to include the following two lines of code above at the top of our code:

```c++
#include <iostream>
using namespace std;
```

So our program should now look something like this:
```c++
#include <iostream>
using namespace std;

int main()
{

  return 0;
}
```

And now here's a demonstration of a program which prints "Hello World!" to the screen:
```c++
#include <iostream>
using namespace std;

int main()
{
  cout << "Hello World!";
  return 0;
}
```

How does this work? Imagine you want to add two numbers - 2 and 5. The expression would be 2 + 5 = 7, right? So here 2 and 5 are the two arguments(also called operands) passed to the operator +, which then returns 7.

Similarly, **<<** is an operator which takes two arguments:
* **Left argument:** *cout*
 * **Right argument:** The thing you want to print to the screen - it could also be a number, character, boolean or text(more about different data types later on).

*Note: Later in the OOP course we'll learn what **cout** is, so don't worry about it now.*

##### Examples:

This prints text to the screen: `cout << "Hello World!"`

This prints a whole number to the screen: `cout << 24;`

This prints a decimal number to the screen: `cout << 3.14;`

This prints a symbol to the screen: `cout << 'c';`

If you want to write twice to the screen like so:
```c++
#include <iostream>
using namespace std;

int main()
{
  cout << "Hello World!";
  cout << "Bye World!";
  return 0;
}
```

The result would be:
> Hello World!Bye World!

So how do we print the second sentance on a new line? We do that by adding **endl** like so:
```c++
#include <iostream>
using namespace std;

int main()
{
  cout << "Hello World!" << endl;
  cout << "Bye World!";
  return 0;
}
```
The result is now:
> Hello World!  
Bye World!

## Data types and variables:
Coming soon...

## Comments:
Comments are lines of code in your program which do not affect any of your program logic. They're just notes that you can write at anywhere in your code. They're most widely used when the programmer feels like he needs to write an explanation as to why he has written the specific piece of code.

There are two types of comments in C++:
 * in-line(single line) comments
 * multi-line comments

#### Example of in-line comments:
```c++
#include <iostream>
using namespace std;

int main()
{
  // this is a comment
  cout << "Hello World!" << endl; // this is also a comment!

  // guess what, this is also a comment
  return 0;
}
```

#### Example of multi-line comments:
```c++
#include <iostream>
using namespace std;

int main()
{
  /* This is
  a
  multiline
  comment. */

  cout << "Hello World!" << endl;

  /* This is also
  a multiline comment.
  */

  return 0;
}
```

Comments have no effect on your code and are ignored when your code gets compiled. They're created for documentation purposes.
