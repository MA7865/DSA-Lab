# DSA Lab 4 - Singly Linked List

This lab implements a singly linked list in C++. The list operations are shared
between the question programs, so compile each question together with
`LinkedList.cpp`.

## Files

- `LinkedList.h` declares the `Node` structure and the linked-list functions.
- `LinkedList.cpp` implements the shared operations, including adding,
  searching, deleting, traversing, and clearing nodes.
- `Q1.cpp` creates and displays a list of three entered integers.
- `Q2.cpp` reads a number of values, appends them, and displays the list and
  node count.
- `Q3.cpp` demonstrates searching for values and displaying the second node.
- `Q4.cpp` demonstrates inserting at the beginning and appending at the end.
- `Q5.cpp` demonstrates deleting the first occurrence of a value.
- `Q6.cpp` provides a menu-driven program for the list operations.

Each `Q*.cpp` file has its own `main()` function. Build one question at a time;
do not compile all of the question files together.

## Requirements

Install a C++ compiler that provides `g++` (for example, MinGW-w64 or MSYS2),
and run the commands below from this folder.

## Build and run

In PowerShell, compile the chosen question and the shared implementation:

```powershell
g++ Q1.cpp LinkedList.cpp -o Q1.exe
```

Then run it:

```powershell
.\Q1.exe
```

Use the corresponding question number to build and run another program:

```powershell
g++ Q2.cpp LinkedList.cpp -o Q2.exe
.\Q2.exe

g++ Q3.cpp LinkedList.cpp -o Q3.exe
.\Q3.exe

g++ Q4.cpp LinkedList.cpp -o Q4.exe
.\Q4.exe

g++ Q5.cpp LinkedList.cpp -o Q5.exe
.\Q5.exe

g++ Q6.cpp LinkedList.cpp -o Q6.exe
.\Q6.exe
```

The source files also contain their individual build/run command in the
opening comment.

## Main linked-list operations

The shared implementation provides functions to create and print a list, append
or prepend a node, count nodes, search for a value, display the second node,
delete the first matching value, and free the allocated nodes. `Q6.exe` brings
most of these operations together in an interactive menu.
