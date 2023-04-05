# Introduction

- The C language is not tied to any one operating system or machine.
- Many of the important ideas of C stem from the language BCPL, developed by
  Martin Richards.
- The influence of BCPL on C proceeded indirectly through the language B, which
  was written by Ken Thompson in 1970 for the first UNIX system on the DEC
  PDP-7.
- The BCPL and B languages are typeless whereas C provides a variety of data
  types.
- The fundamental types in C are characters, and integers and floating point
  numbers of several sizes. In addition, there is a hierarchy of derived data
  types created with pointers, arrays, structures, and unions.
- Expressions are formed from operators and operands; any expression, including
  an assignment or a function call, can be a statement.
- Pointers provide for machine-independent address arithmetic.
- C provides the fundamental control-flow constructions required for
  well-structured programs: statement grouping, decision making (if-else),
  selecting one of a set of possible cases (switch), looping with the
  termination test at the top (while, for) or at the bottom (do), and early
  loop exit (break).
- Functions may return values of basic types, structures, unions or pointers.
- Any function may be called recursively.
- Local variables are typically "automatic", or created anew with each
  invocation.
- Function definitions may not be nested but variables may be declared in a
  block structured fashion.
- Variables may be internal to a function, external but known only within a
  single source file, or visible to the entire program.
- A preprocessing step performs macro substitution on program text, inclusion
  of other source files, and conditional compilation.
- C deals with the same sort of objects that most computers do, namely
  characters, numbers, and addresses. These may be combined and moved about
  with the arithmetic and logical operators are implemented by real machines.
- C provides no operations to deal directly with composite objects such as
  character strings, sets, lists, or arrays.
- There is no heap or garbage collection in C.
- C itself provides no input/output facilities; thee are no READ or WRITE
  statements, and no built-in file access methods. All these higher-level
  implementations must be provided by explicitly called functions.
- C offers only straightforward, single-thread control flow: tests, loops,
  grouping, and subprograms, but not multiprogramming, parallel operations,
  synchronization, or coroutines.
- The ANSI standard, or "ANSI C" was completed late in 1988.
- A significant contribution of the standard is the definition of a library to
  accompany C.
- The standard library functions are only called explicitly, so they can be
  avoided if they are not needed. Most can be written in C, and except for the
  operating system details they conceal, are themselves portable.
- Programs that can be run without change on a variety of hardware are called
  portable programs.
- C is not a strongly-typed language.
- C retains the basic philosophy that programmers know what they are doing; it
  only requires that they state intentions explicitly.
- Some of the operators have the wrong precedence in C.
- The way to learn a new language is to write programs in it.
