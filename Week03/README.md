# Week 03
## Conditional statements
### The *if* statement:
Executes a piece of code only if a certain condition is ***true***.

```c++
if(boolean_expression)
{
    // code that executes if boolean_expression is true
}
```

### The *if-else* statement:
If a certain condition is ***true***, executes a specific piece of code, otherwise exectures some other piece of code.
```c++
if(boolean_expression)
{
    // code that executes if boolean_expression is true
}
else
{
    // code that executes if boolean_expression is false
}
```
Either the block of code after the *if* or the block of code after the *else* will be executed - but never both of them.

### The *if-else if-else* statement
Sometimes we may want to check for multiple conditions, that's where this type of statement comes in handy:
```c++
if(boolean_expression1)
{
    // code that executes if boolean_expression1 is true
}
else if(boolean_expresssion2)
{
    // code that executes if boolean_expression2 is true, but boolean_expression1 is false
}
else if(boolean_expression3)
{
    // code that executes if boolean_expression3 is true, but both boolean_expression1 and boolean_expression2 are false
}
else
{
    // code that executes if all three boolean_expression1, boolean_expression2 and boolean_expression3 are false
}
```
You can have as many as many *else if*s as you want between the *if* and *else*.

*Note1: It's not necessary to follow up the last else if with an else.*

For example, this is valid:
```c++
if(boolean_expression1)
{
    // code that executes if boolean_expression1 is true
}
else if(boolean_expression2)
{
    // code that executes if boolean_expression2 is true, but boolean_expression1 is false
}
```

*Note2: If you're going to use an else in an if-else if-else statement, then the else has to be the last block of code.*

For example, ***this is NOT valid***:
```c++
if(boolean_expression1)
{
    // code that executes if boolean_expression1 is true
}
else // <---------------- INVALID
{

}
else if(boolean_expression2)
{

}
```

That's the the most important thing you'll need to know about *if*, *if-else*, *if-else if-else* statements.

### The ternary operator *?:*
The ternary operator is a way of writing shorter *if-else* statements. Here's the basic syntax:

```
  condition ? statement1 : statement2;
```

If ***condition*** is *true*, then statement1 gets executed. If ***condition*** is *false*, then statement2 gets executed. It's really the same as writing a simple *if-else* statement:
```c++
if(condition)
{
    statement1
}
else
{
    statement2
}
```

Example of the ternary operator:
```c++
int main()
{
    int x = 4;
    cout << (x % 2 == 0 ? "x is an even number" : "x is an odd number";) << endl;

    return 0;
}
```

Example 2:
```c++
int main()
{
    int x = 5;
    int y = 2;

    // assigns the bigger of the two - x and y, to the variable z
    int z = (x > y ? x : y);

    return 0;
}
```


### The *switch* statement:
Coming soon...
