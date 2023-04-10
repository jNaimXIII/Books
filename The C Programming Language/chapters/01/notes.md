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
- The sequence `\n` in the string in C notation for the newline character, which
  when printed advances the output to the left margin on the next line.
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
