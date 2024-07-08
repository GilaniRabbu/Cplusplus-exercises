# C++

- C++ is a popular programming language.
- C++ is used to create computer programs, and is one of the most used language in game development.



## What is C++?

- C++ is a cross-platform language that can be used to create high-performance applications.
- C++ was developed by Bjarne Stroustrup, as an extension to the C language.
- C++ gives programmers a high level of control over system resources and memory.
- The language was updated 4 major times in 2011, 2014, 2017, and 2020 to C++11, C++14, C++17, C++20.



## Why Use C++

- C++ is one of the world's most popular programming languages.
- C++ can be found in today's operating systems, Graphical User Interfaces, and embedded systems.
- C++ is an object-oriented programming language which gives a clear structure to programs and allows code to be reused, lowering development costs.
- C++ is portable and can be used to develop applications that can be adapted to multiple platforms.
- C++ is fun and easy to learn!
- As C++ is close to C, C# and Java, it makes it easy for programmers to switch to C++ or vice versa.



## Difference between C and C++

- C++ was developed as an extension of C, and both languages have almost the same syntax.
- The main difference between C and C++ is that C++ support classes and objects, while C does not.



## C++ Syntax

```c++
// header file library
#include <iostream>

// we can use names for objects and variables from the standard library
using namespace std;

// This is called a function. Any code inside its curly brackets {} will be executed
int main() {
    // an object used together with the insertion operator (<<) to output/print text
    // You can add as many cout objects as you want
    // However, note that it does not insert a new line at the end of the output
    cout << "Hello World!";

    // ends the main function
    return 0;
}
```



## Omitting Namespace

- The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for some objects.

```c++
#include <iostream>

int main() {
    std::cout << "Hello World!";
    return 0;
}
```



## New Lines

- To insert a new line, you can use the `\n` character.
- Another way to insert a new line, is with the `endl` manipulator.
- Both `\n` and `endl` are used to break lines. However, `\n` is most used.

```c++
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World \n";
    cout << "Hello World" << endl;
    cout << "I am learning C++";
    return 0;
}
```



## Escape Sequence

```c++
// `\t` Creates a horizontal tab
cout << "Hello World!\t";
cout << "I am learning C++";

// `\\` Inserts a backslash character (\)
cout << "Hello World!\\";

// `\"` Inserts a double quote character
cout << "They call him \"John\".";
```



## C++ Comments

- Single-line Comments `//`
- Multi-line Comments `/* */`



## C++ Variables

- Variables are containers for storing data values.
- In C++, there are different types of variables (defined with different keywords)

- `int` - stores integers (whole numbers), without decimals, such as 123 or -123.
- `double` - stores floating point numbers, with decimals, such as 19.99 or -19.99.
- `char` - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes.
- `string` - stores text, such as "Hello World". String values are surrounded by double quotes.
- `bool` - stores values with two states: true or false.

```c++
#include <iostream>
using namespace std;

int main() {
    // Create a variable called a of type int and assign it the value 25
    int a = 25;

    // Declare a variable without assigning the value, and assign the value later
    int b;
    b = 5;

    // Note that if you assign a new value to an existing variable, it will overwrite the previous value
    int c = 15;
    c = 30;

    cout << a;
    cout << b;
    cout << c;
    return 0;
}
```

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
    int myNum = 5; // Integer (whole number without decimals)
    float myFloatNum = 5.99; // Floating point number (with decimals)
    double myDoubleNum = 9.98; // Floating point number
    char myLetter = 'G'; // Character
    string myText = "Hello"; // String (text)
    bool myBoolean = true; // Boolean (true or false)
}
```

### Display Variables

- The `cout` object is used together with the `<<` operator to display variables.
- To combine both text and a variable, separate them with the `<<` operator.

```c++
#include <iostream>
using namespace std;

int main() {
    int myAge = 35;
    cout << "I am " << myAge << " years old.";
    return 0;
}
```

### Add Variables Together

- To add a variable to another variable, you can use the `+` operator.

```c++
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 15;
    int sum = a + b;
    cout << sum;
    return 0;
}
```

### Declare Many Variables

- To declare more than one variable of the same type, use a comma-separated list.

```c++
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 15, c = 10;
    cout << a + b + c;
    return 0;
}
```

### One Value to Multiple Variables

- You can also assign the same value to multiple variables in one line.

```c++
#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    x = y = z = 50;
    cout << x + y + z;
    return 0;
}
```

### C++ Identifiers

- All C++ variables must be identified with unique names.
- These unique names are called identifiers.
- Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).
- Note: It is recommended to use descriptive names in order to create understandable and maintainable code.

```c++
#include <iostream>
using namespace std;

int main() {
    // Good name
    int minutesPerHour = 60;

    // OK, but not so easy to understand what m actually is
    int m = 60;

    cout << minutesPerHour << "\n";
    cout << m;
    return 0;
}
```

- **The general rules for naming variables are:**
  - Names can contain letters, digits and underscores.
  - Names must begin with a letter or an underscore (_).
  - Names are case sensitive (myVar and myvar are different variables).
  - Names cannot contain whitespaces or special characters like !, #, %, etc.
  - Reserved words (like C++ keywords, such as int) cannot be used as names.

### C++ Constants

- When you do not want others (or yourself) to change existing variable values, use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only).
- You should always declare the variable as constant when you have values that are unlikely to change.

```c++
#include <iostream>
using namespace std;

int main() {
    const int minutesPerHour = 60;
    const float PI = 3.14;
    cout << minutesPerHour << "\n";
    cout << PI;
    return 0;
}
```



## C++ User Input

- You have already learned that `cout` is used to output (print) values. Now we will use `cin` to get user input.
- `cin` is a predefined variable that reads data from the keyboard with the extraction operator `>>`.
- In the following example, the user can input a number, which is stored in the variable `x`. Then we print the value of `x`.

```c++
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Type a number "; // Type a number and press enter
    cin >> x; // Get user input from the keyboard
    cout << "Your number is: " << x; // Display the input value
    return 0;
}
```

- **Good To Know**
- cout is pronounced "see-out". Used for output, and uses the insertion operator (<<).
- cin is pronounced "see-in". Used for input, and uses the extraction operator (>>).

### Creating a Simple Calculator

```c++
#include <iostream>
using namespace std;

int main() {
    int x, y;
    int sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum;
    return 0;
}
```



## C++ Data Types

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
    int myNum = 5; // Integer (whole number without decimals)
    float myFloatNum = 5.99; // Floating point number (with decimals)
    double myDoubleNum = 9.98; // Floating point number
    char myLetter = 'G'; // Character
    string myText = "Hello"; // String (text)
    bool myBoolean = true; // Boolean (true or false)
}
```

### C++ Numeric Data Types

- Use `int` when you need to store a whole number without decimals, like 35 or 1000, and `float` or `double` when you need a floating point number (with decimals), like 9.99 or 3.14515.

#### int

```c++
int myNum = 1000;
cout << myNum;
```

#### float

```c++
float myNum = 10.25;
cout << myNum;
```

#### double

```c++
double myNum = 8.45;
cout << myNum;
```

#### float vs. double

- The precision of a floating point value indicates how many digits the value can have after the decimal point.
- The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits.
- Therefore it is safer to use double for most calculations.

#### Scientific Numbers

- A floating point number can also be a scientific number with an "e" to indicate the power of 10.

```c++
#include <iostream>
using namespace std;

int main() {
    float f1 = 35e4;
    double d1 = 45E4;
    cout << f1 << "\n";
    cout << d1;
    return 0;
}
```

### C++ Boolean Data Types

- A boolean data type is declared with the `bool` keyword and can only take the values `true` or `false`.
- When the value is returned, `true` = `1` and `false` = `0`.

```c++
#include <iostream>
using namespace std;

int main() {
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << "\n";
    cout << isFishTasty;
    return 0;
}
```

### C++ Character Data Types

- The char data type is used to store a single character.
- The character must be surrounded by single quotes, like 'A' or 'c'.

```c++
#include <iostream>
using namespace std;

int main() {
    char myName = 'K';
    cout << myName;
    return 0;
}
```

- Alternatively, you can use ASCII values to display certain characters.

```c++
#include <iostream>
using namespace std;

int main() {
    char a = 65, b = 66, c = 67;
    cout << a;
    cout << b;
    cout << c;
    return 0;
}
```

### C++ String Data Types

- The string type is used to store a sequence of characters (text).

- This is not a built-in type, but it behaves like one in its most basic usage.

- String values must be surrounded by double quotes.

- To use strings, you must include an additional header file in the source code, the `<string>` library.

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
    string greeting = "Hello";
    cout << greeting;
    return 0;
}
```



## C++ Operators

- Operators are used to perform operations on variables and values.

### Arithmetic Operators

- Arithmetic operators are used to perform common mathematical operations.

### Assignment Operators

- Assignment operators are used to assign values to variables.

### Comparison Operators

- Comparison operators are used to compare two values (or variables).

- This is important in programming, because it helps us to find answers and make decisions.

- The return value of a comparison is either 1 or 0, which means true (1) or false (0). These values are known as Boolean values.

### Logical Operators

- As with comparison operators, you can also test for true (1) or false (0) values with logical operators.



## C++ Strings

- Strings are used for storing text.
- A `string` variable contains a collection of characters surrounded by double quotes.

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
    string greeting = "Hello";
    cout << greeting;
    return 0;
}
```

### C++ String Concatenation

- The `+` operator can be used between strings to add them together to make a new string. This is called concatenation.

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName + " " + lastName;
    cout << fullName;
    return 0;
}
```

### Append

- A string in C++ is actually an object, which contain functions that can perform certain operations on strings.

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName;
    return 0;
}
```

### Adding Numbers and Strings

- C++ uses the + operator for both addition and concatenation.
- Numbers are added. Strings are concatenated.

```c++
#include <iostream>
#include <string>
using namespace std;

int main () {
    string x = "10";
    string y = "20";
    string z = x + y;
    cout << z;
    return 0;
}
```

### String Length

- To get the length of a string, use the length() function.
- Tip: You might see some C++ programs that use the size() function to get the length of a string.
- This is just an alias of length(). It is completely up to you if you want to use length() or size().

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length();
    cout << "The length of the txt string is: " << txt.size();
    return 0;
}
```

### Access Strings

- You can access the characters in a string by referring to its index number inside square brackets `[]`.

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
    string myString = "Hello";
    cout << myString[0];
    // Change String Characters
    // myString[0] = 'J';
    // cout << myString;
    return 0;
}
```

### User Input Strings

- when working with strings, we often use the `getline()` function to read a line of text. It takes cin as the first parameter, and the string variable as second.

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;
    return 0;
}
```

### Omitting Namespace

- You might see some C++ programs that runs without the standard namespace library.
- The `using namespace std` line can be omitted and replaced with the `std` keyword, followed by the `::` operator for `string` (and `cout`) objects.

```c++
#include <iostream>
#include <string>

int main() {
    std::string greeting = "Hello";
    std::cout << greeting;
    return 0;
}
```



## C++ Booleans

- C++ has a bool data type, which can take the values true (1) or false (0).

```c++
#include <iostream>
using namespace std;

int main() {
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << "\n";
    cout << isFishTasty;
    return 0;
}
```

### Boolean Expression

- Let's think of a "real life example" where we need to find out if a person is old enough to vote.
- In the example below, we use the `>=` comparison operator to find out if the age (`25`) is greater than OR equal to the voting age limit, which is set to `18`.

```c++
#include <iostream>
using namespace std;

int main() {
    int myAge = 25;
    int votingAge = 18;
    cout << (myAge >= votingAge); // returns 1 (true), meaning 25 year olds are allowed to vote!
    return 0;
}
```

- Cool, right? An even better approach (since we are on a roll now), would be to wrap the code above in an `if...else` statement, so we can perform different actions depending on the result.

```c++
#include <iostream>
using namespace std;

int main() {
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
        cout << "Old enough to vote!";
    } else {
        cout << "Not old enough to vote.";
    }
    return 0;
}
```

- Booleans are the basis for all C++ comparisons and conditions.

##
