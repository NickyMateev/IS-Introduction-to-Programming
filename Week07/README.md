# Week 07
## Arrays

### What are arrays?
An array is a sequence of elements of the same data type(*int, char, double, etc*). Arrays are particularly useful when we want to deal with multiple elements of the same type and we don't want to bother initializing and creating a new variable for every single one of them.

![arrayRep](/Week07/images/arrayRep.jpeg)

This would be a representation of an array called **arr** containing **6 elements**. Each blue rectangle represents a single element of the array. Each element corresponds to a specific **index**. The elements are numbered from **0** to **n - 1**, where 0 is the index of the first element and n is the number of elements in the array. Therefore n - 1 would be the last element's index.

A typical declaration of an array is:

**type** *name*[**elements**];

Where:
 * **type** - could be *int, double, char*, etc...;
 * **name** - could be any name you want *(except reserved keywords in the C++ language)*;
 * **elements** - some number that's equal to or greater than 1. This represents the size of the array.

So this is how we would create an int array of 6 elements:
```c++
int arr[6];
```

**NOTE: The size of the array inside the square brackets [] must be a CONSTANT(or literal), not a variable!**

### Initializing an array
For now we've only declared/created our array. Now we need to initialize it with some values. If you forget to initialize your array, then the values of its elements will be undetermined and could lead to errors if later used.

Let's declare our array and initialize it all at once, like so:
```c++
int arr[6] = {12 , 45 , 1, -4, 5, 9};
```
![arrayRepInit](/Week07/images/arrayRepInit.jpeg)

As you can see we've set the values for all of the 6 array elements.

**NOTE: When specifying the values of the array like shown above, it's not necessary to set a size in the brackets.**

This would be valid as well:
```c++
int arr[] = {12 , 45 , 1, -4, 5, 9}; // an array will be created(and initialized) with space for 6 elements
```


But what happens if you specify the values of only some of them, like so:
```c++
int arr[6] = {12 , 45 , 1, -4};
```
This would be valid in C++. The first four elements would be assigned with the specified values, but the remaining two elements would be automatically set to the default value for the elements' type(zero in most cases). In this case the last two elements would have the value 0.

![arrayRepPartlyInit](/Week07/images/arrayRepPartlyInit.jpeg)

The following is also a valid piece of code:
```c++
int arr[6] = {};
```
In this case, all of the array elements would be 0, like shown below:

![arrayRep0](/Week07/images/arrayRep0.jpeg)

**NOTE: An array cannot be initialized with more values than it was declared to store!**

This is not a valid piece of code:
```c++
int arr[6] = {12 , 45 , 1, -4, 5, 9, 123};
```
This is not valid, because the array can store only 6 elements and we're trying to initialize it with 7.

### Accessing values of an array
Accessing the value of an element in an array is simple. All you have to do is specify the array name followed by square brackets and inside the brackets specify the index of the element you want.

![arrayRepIndex](/Week07/images/arrayRepIndex.jpeg)

The following code demonstrates creating an array, initializing it with values and then accessing its second element:
```c++
int arr[6] = {12 , 45 , 1, -4, 5, 9}; // creating & initializing the array
cout << arr[1] << endl; // accessing and printing the second element
```

Notice how we would specify index **1** for the **second element**. That's because, like mentioned before, the indexing starts from **0** when working with arrays.

Every array element is no different than a regular variable. We just access it with a specific array index. Here are some other valid examples of array element usage:
```c++
arr[3] = 123; // setting the value of the 4th element to 123
int x = arr[3]; // setting the value of x to 123(because that's the value of the 4th element in the array)
arr[4] = 2 * x; // setting the value of the 5th element to 246

int y = 1;
cout << arr[4 + y] << endl; // accessing the 6th element and printing it
```


**Example of a program which prints the doubled values of the elements in an array:**

The following program will demonstrate most of the things we learned about arrays. You'll also see a very good practice on how to create an array using a constant variable for its size(which is allowed in C++, and which is recommended to do when creating arrays).
```c++
#include <iostream>
using namespace std;

const int SIZE = 100;

int main()
{
    int arr[SIZE];
    int numOfElements;
    cout << "How many elements do you want to enter: ";
    cin >> numOfElements;

    // loop which sets the initial values for the array:
    for(int i = 0; i < numOfElements; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    // loop which prints the doubled values of the elements in the array:
    for(int i = 0; i < numOfElements; i++)
    {
        int doubledElem = arr[i] * 2;
        cout << "Element #" << i << ": " << doubledElem << endl;
    }

    return 0;
}
```


Example:
| Input                                                                                    | Output                                           |
|------------------------------------------------------------------------------------------|--------------------------------------------------|
| How many elements do you want to enter: 3<br/>arr[0] = 1<br/>arr[1] = 2<br/>arr[2] = 3   | Element #0: 2<br/>Element #1: 4<br/>Element #2: 6|
