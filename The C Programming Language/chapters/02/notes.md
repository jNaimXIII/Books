# Chapter 02 - Types, Operators, and Expressions

- Declarations lit the variables to be used, and state what type they have and
  perhaps what their initial values are.
- Expressions combine variables and constants to produce new values.
- The type of an object determines the set of values it can have and what
  operations can be performed on it.
- There are now `signed` and `unsigned` forms of all integer types, and
  notations for unsigned constants and hexadecimal character constants.
- Floating-point operations may be done in single precision; there is also a
  `long double` type for extended precision.
- String constants may be concatenated at compile time.
- Objects may be declared `const`, which prevents them from being changed.

## 2.1 Variable Names

- Names are made up of letters and digits; the first character must be a
  letter. The underscore "\_" counts as a letter; it is sometimes useful for
  improving the readability of long variable names.
- Don't begin variable names with underscore, however, since library routines
  often use such names.
- Upper case and lower case letters are distinct, so `x` and `X` are two
  different names.
- Traditional C practice is to use lower case for variable names, and all upper
  case for symbolic constants.
- At least the first 31 characters of an internal name are significant. For
  function names and external variables, the number may be less than 31,
  because external names may be used by assemblers and loaders over which the
  language has no control. For external names, the standard guarantees
  uniqueness only for 6 characters and a single case.
- Keywords like `if, else, int, float`, etc., are reserved; you can't use them
  as variable names. They must be in lower case.
- It's wise to choose variable names that are related to the purpose of the
  variable, and that are unlikely to get mixed up typographically. We tend to
  use short names for local variables, especially loop indices, and longer
  names for external variables.

## 2.2 Data Types and Sizes

- Basic data types in C
  - `char`: a single type, capable of holding one character in the local
    character set.
  - `int`: an integer, typically reflecting the natural size of integers on the
    host machine.
  - `float`: single-precision floating point.
  - `double`: double-precision floating point.
- There are a number of qualifiers that can be applied to basic types.
- `short` is often 16 bits, `long` 32 bits, and `int` either 16 or 32 bits.
- Each compiler is free to choose appropriate sizes for its own hardware,
  subject only to the restriction that `short`s and `int`s are at least 16
  bits, `long`s are at least 32 bits, and `short` is no longer than `int`,
  which is no longer than `long`.
- The qualifier `signed` or `unsigned` may be applied to char or any integer.
- `unsigned` numbers are always positive or zero, and obey the laws of
  arithmetic modulo $2^n$, where $n$ is the number of bits in the type.
- `unsigned` `char` variables have values between 0 and 255, while signed
  `char`s have values between `-128` and `127` (in a two's complement machine).
- Whether plain `char`s are signed or unsigned is machine-dependant, but
  printable characters are always positive.
- As with integers, the sizes of floating-point objects are
  implementation-defined; `float`, `double`, and `long double` could represent
  one, two or three distinct sizes.
- The standard headers `<limits.h>` and `<float.h>` contain symbolic constants
  for all these sizes, along with other properties of the machine and compiler.

## 2.3 Constants

- An integer constant like 1234 is an `int`.
- A `long` constant is written with a terminal `l` (ell) or `L`, as in `1234L`;
  an integer too big to fit into an `int` will also be taken as a long.
- Unsigned constants are written with a terminal `u` or `U`, and the suffix
  `ul` or `UL` indicates `unsigned long`.
- Floating-point constants contain a decimal point (123.4) or an exponent
  (1e-2) or both; their type is `double` unless suffixed. The suffixes `f` or
  `F` indicate a float constant; `l` or `L` indicates a long double.
- A leading `0` on an integer constant means octal; a leading `0x` or `0X`
  means hexadecimal.
- Octal and hexadecimal constants may also be followed by `L` to make them
  `long` and `U` to make them unsigned.
- A character constant is an integer, written as one character within single
  quotes, such as `x`. The value of a character constant is the numeric value
  of the character in the machine's character set.
- Character constants participate in numeric operations just as any other
  integers, although they are most often used in comparisons with other
  characters.
- An arbitrary byte-sized bit pattern can be specified by `\000` where `000` is
  one to three octal digits or by `\xhh` where `hh` is one or more hexadecimal
  digits.
- The complete set of escape sequences is:
  | Sequence | Name |
  | :------: | ---------------------- |
  | `\a` | alert (bell) character |
  | `\b` | backspace |
  | `\f` | formfeed |
  | `\n` | newline |
  | `\r` | carriage return |
  | `\t` | horizontal tab |
  | `\v` | vertical tab |
  | `\v` | vertical tab |
  | `\\` | backslash |
  | `\?` | question mark |
  | `\'` | single quote |
  | `\"` | double quote |
  | `\000` | octal number |
  | `\000` | hexadecimal number |
- The character constant `\0` represent the character with value zero, the null
  character. `\0` is often written instead of 0 to emphasize the character
  nature of some expression, but the numeric value is just 0.
- A `constant expression` is an expression that involves only constants.
- Such expressions (constant) may be evaluated during compilation rather than
  run-time, and accordingly may be used in any place that a constant can occur.
- A `string constant` or `string literal` is a sequence of zero or more
  characters surrounded by double quotes.
- The quotes are not part of the string, but serve only to delimit it. The same
  escape sequences used in character constants apply in strings; `\"`
  represents the double-quote character.
- String constants can be concatenated at compile time. `"hello" " world"`
- This (string constants' concatenation) is useful for splitting long strings
  across several source lines.
- Technically, a string constant is an array of characters. The internal
  representation of a string has a null character `\0` at the end, so the
  physical storage required is one more than the number of characters written
  between the quotes.
- This representation means that there is no limit to how long a string can be,
  but programs must scan a string completely to determine its length.
- The standard library function `strlen(s)` returns the length of its character
  string argument `s`, excluding the terminal `\0`.
- An enumeration is a list of constant integer values.
- The first name in an `enum` has value 0, the next, and so on, unless explicit
  values are specified. If not all values are specified, unspecified values
  continue the progression from the last specified value.`
- Names in different enumerations must be distinct. Values need not be distinct
  in the same enumeration.
- Enumerations provide a convenient way to associate constant values with
  names, an alternative to `#define` with the advantage that the values can be
  generated for you.
