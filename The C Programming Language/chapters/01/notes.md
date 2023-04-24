# Chapter 01 - A Tutorial Introduction

## 1.1 Getting Started

- A C program, whatever its size, consists of functions and variables.
- A function contains statements that specify the computing operations to be
  done, and variables store values used during the computation.
- `main` is special - the program begins executing at the beginning of main.
- Every program must have a `main` somewhere.
- `#include <stdio.h>` tells the compiler to include information about the
  standard input/output library.
- One method of communicating data between functions is for the calling
  function to provide a list of values, called arguments, to the function it
  calls.
- The parentheses after the function name surround the argument list.
- A function is called by naming it, followed by a parenthesized list of
  arguments.
- `printf` is a library function that prints output, in this case the string of
  characters between the quotes.
- A sequence of characters in double quotes, like "hello, world\n", is called a
  character string or string constant.
- The sequence `\n` in the string in C notation for the newline character,
  which when printed advances the output to the left margin on the next line.
- `printf` never supplies a newline automatically, so several calls may be used
  to build up an output line in states.
- `\n` represents only a single character. An escape sequence like \n provides
  a general and extensible mechanism for representing hard-to-type or invisible
  characters.
- `\t` for tab, `\b` for backspace, `\"` for double quotes, and `\\` for
  backslash itself.

## 1.2 Variables and Arithmetic Expressions

- `C = (5 / 9) * (F - 32)` to convert fahrenheit into celsius.
- Any characters between `/*` and `*/` are ignored by the compiler; they may be
  used freely to make a program easier to understand. Comments may appear
  anywhere a blank or tab or newline can.
- In C, all variables must be declared before they are used, usually at the
  beginning of the function before any executable statements.
- A declaration announces the properties of variables; it consists of a type
  name and a list of variables.
- The type `int` means that the variables listed are integers, by contrast with
  `float`, which means floating point, i.e, numbers that may have a fractional
  part.
- The range for both int and float depends on the machine you are using.
- 16-bit ints, which lies between -32768 and +32765, are common, as are 32-bit
  ints.
- A `float` number is typically a 32-bit quantity, with at least six
  significant digits and magnitude generally between about 10^-38 and 10^+38.
- C provides several other basic data types besides `int` and `float`.
  - `char`: character - a single byte
  - `short`: short integer
  - `long`: long integer
  - `double`: double precision floating point
- The sizes of these objects are also machine-dependent.
- Assignment statements set the variables to their values.
- Individual statements are terminated by semicolons.
- The while loop operates as follows: The condition in parentheses is tested.
  If it is true, the body of the loop is executed. Then the condition is
  re-tested, and if true, the body is executed again. When the test becomes
  false the loop ends, and execution continues at the statement that follows
  the loop.
- If there are no further statements, the program terminates.
- The body of a while can be one or more statements enclosed in braces or a
  single statement without braces.
- The indentation emphasizes the logical structure of the program.
- Although C compilers do not care about how a program looks, proper
  indentation and spacing are critical in making programs easy for people to
  read.
- It is recommended write only one statement per line and using blanks around
  operators to clarify grouping.
- Integer division truncates: any fractional part is discarded.
- `printf` is a general-purpose output formatting function.
- Its first argument is a string of characters to be printed, with each `%`
  indicating where one of the other arguments is to be substituted, and in what
  form it is to be printed.
- Each `%` construction in the first argument of `printf` is paired with the
  corresponding second argument, third argument, etc; they must match up
  properly by number and type, or it will provide wrong answers.
- `printf` is not part of the C language; there is no input or output defined
  in C itself.
- `printf` is just a useful function from the standard library of functions
  that are normally accessible to C programs.
- Passing the width argument to each `%d` in the printf statement, the numbers
  printed will be right-justified in their fields.
- If arithmetic operator has integer operands, an integer operation is
  performed.
- If an arithmetic operator has one floating-point operand and one integer
  operand, however, the integer will be converted to floating point before the
  operation is done. (long ints will loose precision?)
- In `printf`, width and precision may be omitted from a specification.
- `printf` also recognizes `%o` for octal, `%x` for hexadecimal, `%c` for
  character, `%s` for character string and `%%` for % itself.

## 1.3 The For Statement

- In any context where it is permissible to use the value of a variable of some
  time, it is also permissible to use a more complicated expression of that
  type.
- The `for` statement is a loop, a generalization of the `while` statement.
- A `for` loop has three parts within the parentheses. The first part, the
  initialization is done once, before the loop proper is entered. The second
  part is the test or condition that controls the loop. This condition is
  evaluated if it is true, the body of the loop is executed. Then the increment
  step is executed, and the condition re-evaluated. The loop terminates if the
  condition becomes false.
- The choice between while and for is arbitrary, based on which seems clearer.
- The `for` is usually appropriate for loops in which the initialization and
  increment are single statements and logically related, since it is more
  compact than while and it keeps the loop control statements together in one
  place.

## 1.4 Symbolic Constants

- It's bad practice to bury "magic numbers" in a program; they convey little
  information to someone who might have to read the program later, and they are
  hard to change in a systematic way.
- A `#define` line defines a symbolic name or symbolic constant to be a
  particular string of characters. Any occurrence of the name will be replaced
  by the corresponding replacement text. The name has the same form as a
  variable name: a sequence of letters and digits that begins with a letter.
  The replacement text can be any sequence of characters; is not limited to
  numbers.
- Symbolic constant names are conventionally written in upper case so they can
  be readily distinguished from lower case variable names.
- There is no semicolon at the end of a `#define` line.

## 1.5 Character Input and Output

- Text input or output, regardless of where it originates or where it goes to
  is dealt with as streams of characters. A text stream is a sequence of
  characters divided into lines; each line consists of zero or more characters
  followed by a newline character.
- `getchar` reads the next input character from a text stream and returns that
  as its value.
- `putchar` prints a character each time it is called.
- The relational operator `!=` means "not equal to".
- What appears to be a character on the keyboard on screen is of course, like
  everything else, stored internally just as a bit pattern.
- The type `char` is specifically meant for storing such character data, but
  any integer type can be used.
- `getchar` returns a distinctive value when there is no more input, a value
  that cannot be confused with any real character. This value is called `EOF`,
  for "end of file".
- EOF is an integer defined in `<stdio.h>`, but the specific numeric value
  doesn't matter as long as it is not the same as any char value. By using the
  symbolic constant, we are assured that nothing in the program depends on
  specific numeric value.
- In C, any assignment is an expression and has a value, which is the value of
  the left hand side after the assignment.
- An assignment can appear as part of a larger expression.
- The precedence of `!=` is higher than that of `=`.
- The `++` operator means increment by one.
- `--` means decrement by one.
- The operators `++` and `--` can be either prefix operators or postfix; these
  two forms have different values in expressions.
- `long` integers are at least 32 bits.
- On some machines, `int` and `long` are the same size, on others an int is 16
  bits, with a maximum value of 32767, and it would take relatively little
  input to overflow an `int` counter.
- `%ld` tells `printf` that the corresponding argument is a long integer.
- `double` is a double precision float.
- `printf` uses `%f` for both `float` and `double`.
- `%0.f` suppresses printing of the decimal point and the fraction part.
- Grammatical rules of C require that a for statement have a body. If none is
  required, the isolated semicolon, called a null statement, is there to
  satisfy that requirement. It is put on a separate line to make it visible.
- `while` and `for` loops test at the top of the loop, before proceeding with
  the body. If there is nothing to do, nothing is done, even if that means
  never going through the loop body.
- Programs should act intelligently when given zero-length input.
- The `while` and `for` statements help ensure that programs do reasonable
  things with boundary conditions.
- The `==` is C notion for "is equal to".
- A character written between single quotes represents an integer value equal
  to the numerical value of the character in the machine's character set. It
  is called a character constant, although it is just another way to write a
  small integer.
- The escape sequences used in string constants are also legal in character
  constants, so `'\n'` stands for the value of the newline character, which is
  `10` in ASCII.
- `'\n'` is a single character and in expressions is just an integer; on the
  other hand `"\n"` is a string constant that happens to contain only one
  character.
- Multiple variables can be assigned the same value as `a = b = c = 0`.
- The operator `||` means OR and `&&` means AND. `&&` has a higher precedence
  than `||`.
- Expressions connected by `&&` or `||` are evaluated left to right, and it is
  guaranteed that evaluation will stop as soon as the truth or falsehood is
  known.
- `else` species an alternative action if the condition part of an `if`
  statement is false.

## 1.6 Arrays

- The declaration `int n[10]` declares `n` to be an array of 10 integers.
- Array subscripts always start at zero in C.
- A subscript can be any integer expression, which includes integer variables
  and integer constants.
- By definition, `char`s are just small integers, so `char` variable and
  constants are identical to `int`s in arithmetic expressions.
- In conditional statements the conditions are evaluated in order from the top
  until some condition is satisfied; at that point the corresponding statement
  part is executed, and the entire construction is finished.
- If none of the conditions are satisfied, the statement after the final else
  is executed if present. If the final else and statement are omitted, no
  action takes place.
- There can be any number of `else if (condition) statement` groups between the
  initial `if` and the final `else`.

## 1.7 Functions

- A function provides a convenient way to encapsulate some computation, which
  can then be used without worrying about its implementation.
- With properly designed functions, it is possible to ignore how a job is done;
  knowing what is done is sufficient.
- C has no exponentiation operator.
- Function definitions can appear in any order, and in one source file or
  several, although no function can be split between files.
- We generally use "parameter" for a variable named in the parenthesized list
  in a function definition, and "argument" for the value used in a call of the
  function. The terms "formal argument" and "actual argument" are also used.
- The `return` statement is used to return a value from a function.
- A function need not return a value; a return statement with no expression
  causes control, but no useful value, to be returned to the caller, as does
  "falling off the end" of a function by reaching the terminating right brace.
- The calling function can ignore a value returned by a function.
- A return value of zero implies normal termination; non-zero values signal
  unusual or erroneous termination conditions.
- The "function prototype" declaration has to agree with the definition and
  uses of the function declaration.
- Well-chosen names are good documentation.

## 1.8 Arguments - Call by Value

- In C, all function arguments are passed "by value".
- The called function cannot directly alter a variable in the calling function;
  it can only alter its private, temporary copy.
- When necessary, it is possible to arrange for a function to modify a variable
  in a calling routine. The caller must provide the address of the variable to
  be set, and the called function must declare the parameter to be a pointer
  and access the variable indirectly through it.
- When the name of an array is used as an argument, the value passed to the
  function in the location or address of the beginning of the array - there is
  no copying of array elements. By subscripting this value, the function can
  access and alter any element of the array.
