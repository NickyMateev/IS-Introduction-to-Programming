# Week 05
## Iteration statements (Loops)
Sometimes we want to repeat a certain piece of code an exact number of times. Let's say we want to print to the screen 5 times "Hello World".

```c++
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    cout << "Hello World" << endl;
    cout << "Hello World" << endl;
    cout << "Hello World" << endl;
    cout << "Hello World" << endl;
    return 0;
}
```

This is obviously very clunky, ineffective and takes up a ton of space on the screen(and in the code).

Thankfully, loops come to the rescue! In C++ there are 3 types of loops: **while**, **do while** and **for**.

### The *while* loop:
Checks a condition and repeats the code in the while block while the condition is true. The condition is a **boolean** value.
```c++
while(condition)
{
    // code
}
```

How would we print "Hello World" 5 times?
```c++
#include <iostream>
using namespace std;

int main()
{
    int counter = 0;
    while(counter < 5)
    {
        cout << "Hello World" << endl;
        counter++;
    }
    return 0;
}
```

### The *do while* loop:
Similar to the **while** loop with the only difference that the code inside the **do while** loop will execute **at least once** before the condition is checked. So we can guarantee that this type of loop will go through **at least one iteration**. We can't say the same thing about a **while** loop though.

```c++
do {
    // code
} while(condition);
```

And of course, our favorite "Hello World" program:
```c++
#include <iostream>
using namespace std;

int main()
{
    int counter = 0;
    do {
        cout << "Hello World" << endl;
        counter++;
    } while(condition < 5);
    return 0;
}
```

### The *for* loop:
And finally... the **for** loop. At last we meet. It's a little more complex than the other two, but don't worry, you'll master it very quickly!

Basic syntax of a **for** loop:
```c++
for(initialization; condition; increase)
{
    // code
}
```

Just so that you can quickly understand how it works, let's demonstrate something very different and original than anything we've shown so far - let's write a program which prints "Hello World" 10 times to the screen. Yes, **10 times**!

```c++
#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 10; i++)
    {
        cout << "Hello World" << endl;
    }

    return 0;
}
```

Here's what's happening:
 1. A variable called **i** and of type **int** is created. It's initial value is **0**;
 2. The condition **i < 10** is checked;
 3. If the condition returns **false**, then the loop exits and we continue with the code after the **for** loop.
 4. If the condition returns **true**, then the code inside the **for** block (a.k.a. the *cout << "Hello World" << endl;* statement) gets executed;
 5. After the code inside the block is executed, then we increment **i** by **1**(the *i++* part);
 6. Go back to step 2. and repeat.

That's everything to it! Nothing more, nothing less.

Here's an example of a program which prints the numbers from 1 to 10:
```c++
#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }

    return 0;
}
```

### The *continue* and *break* statements:
**Continue** and **break** are two statements which are very easy to understand and use inside any of the three types of loops.
 * **continue;** - stops the current loop iteration and goes to the next one
 * **break;** - stops the entire loop

Let's see examples of both to better understand them.


Example of **continue**:
```c++
#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 10; i++)
    {
        if(i % 2 == 0)
        {
            continue;
        }

        cout << i << ", ";
    }

    return 0;
}
```
Output:
> 1,3,5,7,9,

As you can see, the loop prints **i** on each iteration, but first it checks if **i** is divisible by 2(i.e. if it's an even number). If **i** is an even number, then **continue;** gets called and that means that everything that's under the **continue;** statement gets skipped and we go directly to **i++**(to the next iteration). This is basically a program which prints the odd numbers from 0 to 10.

Example of **break**:
```c++
#include <iostream>
using namespace std;

int main()
{
    int num = 9;
    while(num >= 0)
    {
        if(num % 5 == 0)
        {
            break;
        }

        cout << num << ", ";
        num--;
    }

    cout << "The loop broke. Ha!" << endl;
    return 0;
}
```
Output:
> 9, 8, 7, 6, The loop broke. Ha!

At first glance you'd probably guess that this loop prints all numbers from 9 to 0 backwards. Almost! Inside the loop we have an if statement which checks if **num** is divisible by 5. If it is, then the **break;** statement will execute and the loop will break, just like in the example.
