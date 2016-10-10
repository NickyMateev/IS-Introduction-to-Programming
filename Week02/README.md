# Week 02

## What's a computer program?

A computer program is simply **a sequence of instructions that are executed by the computer**.
Programming languages like **C++** allow us to write such instructions(*code*). With the help of a program called a *compiler* we can convert our programming code into machine code understandable by the CPU. After our code is compiled we can run it and see the result of our program.

## Structure of a basic C++ program:
This is called the **main function**:

```c++
int main()
{

  return 0;
}
```

**Every program** has to have a **main function**. That's where our program starts execution. We'll study functions in C++ later on, but for now just remember that every program we write from now on has to have a **main function** written as it is in the code snippet above. The code we will be writing will be placed somewhere after **the opening bracket** and before the **return 0;** statement. Every single thing we write will be executed in the order it was written. Think of **return 0;** as the point where the program ends.

## Printing to the screen:
Whenever we want to print something to the screen or want to take some input from the keyboard from the user, we first have to include the following two lines of code above at the top of our code:

```c++
#include <iostream>
using namespace std;
```

The first line includes a **library** called *iostream*. The second one is a **namespace** inside the iostream library. Later in the course we'll look at libraries and namespaces in more detail, don't worry about them now.

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

*Note: Later in the OOP course we'll learn what cout is, so don't worry about it now.*

##### Examples:

This prints text to the screen: `cout << "Hello World!;"`

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
### Data types
In programming you'll be working with various types of data. For example: numbers and characters. Some of the data types available in C++ are:

| Type          | Amount of memory in computer  | Possible values  |
| ------------- |:-----------------------------:| ----------------:|
| int           |  4 bytes             | -2147483648 to 2147483647 |
| double        |  8 bytes             | +/- 1.7e +/- 308 (~15 digits)|
| bool          |  1 byte              |    true or false(1 or 0)  |
| char          |  1 byte              |    -128 to 127             |

For more info on data types: [Data Types][1]

### Variables
Variables are an essential part of every program. A variable consists of a **data type**, **name** and **value**. Variables are stored in the computer's RAM when they are created and are deleted from there when the program stops.

#### Example of variable declaration:
 * This declares the variable **x** of type **int**: `int x;`
 * This declares the variable the variable **pi** of type **double**: `double pi;`
 * This declares the variable **var** of type **char**: `char var;`

```c++
#include <iostream>
using namespace std;

int main()
{
  int x;
  double pi;
  char var;

  return 0;
}
```

So far, we've only declared some variables, but we've yet to store some values in them. The process of setting values to variables is called **variable initialization**. A simple way to do that is:
```c++
#include <iostream>
using namespace std;

int main()
{
  int x;
  double pi;
  char var;

  x = 5;
  pi = 3.14;
  var = 'c';

  return 0;
}
```

This will definitely work and is acceptable code, but a better practice is to declare and initialize(give value to) variables all at once:
```c++
#include <iostream>
using namespace std;

int main()
{
  int x = 5;
  double pi = 3.14;
  char var = 'c';

  return 0;
}
```

### Operations with variables
Due to the large amount of operators and operations between variables in C++, we'll just point out some of the most fundamental ones. For more information: [Operators in C++][2]

Let's have:
```c++
int x = 4;
int y = 2;
```

**Arithmetic operators:**

| Operator      | Description                                                               | Example             |
| ------------- |:-------------------------------------------------------------------------:| -------------------:|
| +             |  Adds two operands                                                        | x + y is equal to 6 |
| -             |  Subtracts second operand from the first                                  | x - y is equal to 2 |
| *             |  Multiplies both operands                                                 | x * y is equal to 8 |
| /             |  Divides first operand with the second                                    | x / y is equal to 2 |
| %             |  Returns the remainder when dividing the first operand with the second    | x % y is equal to 0 |
| ++            |  Increases value by one                                                   | x++ is equal to 5   |
| --            |  Decreases value by one                                                   | y-- is equal to 1   |

**Relational operators:**

| Operator      | Description                                                        | Example                   |
| ------------- |:------------------------------------------------------------------:| -------------------------:|
| ==            |  Returns true if x and y are equal, false otherwise                | x == y is equal to false  |
| !=            |  Returns true if x and y are not equal, false otherwise            | x != y is equal to true   |
| >             |  Returns true if x is bigger than y, false otherwise               | x > y is equal to true    |
| <             |  Returns true if x is smaller than y, false otherwise              | x < y is equal to false   |
| >=            |  Returns true if x is bigger than or equal to y, false otherwise   | x >= y is equal to true   |
| <=            | Returns true if x is smaller than or equal to y, false otherwise   | x <= y is equal to false  |

**Logical operators:**
Let's have:
```c++
bool x = true;
bool y = false;
```
*Note: This the above code snippet is the same as:*
```c++
bool x = 1;
bool y = 0;
```
That's because in programming *true* is the same as *1* and *false* is the same as *0*.

| Operator  | Description                                                                               | Example                   |
| --------- |:-----------------------------------------------------------------------------------------:| -------------------------:|
| &&        | Returns true only if both x and y are true, false otherwise                               | x && y is equal to false  |
| \|\|      | Returns true if at least one of x or y are equal to true, returns false if both are false | x \|\| y is equal to true |
| !         | Reverses the logical state - true becomes false, and false becomes true                   | !x is equal to false, !y is equal to true |

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

[1]: https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm
[2]: https://www.tutorialspoint.com/cplusplus/cpp_operators.htm
