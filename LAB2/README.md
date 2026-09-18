# Lab2: Pointers and Dynamic Memory in C++

## Overview

This lab focuses on understanding pointers, arrays, dynamic memory allocation, pointer arithmetic, and safe memory management in C++.

## Task 1 — Pointers with Static Arrays

The purpose of this task is to understand how pointers can be used to access and modify elements of a fixed-size array. It practices pointer arithmetic using expressions such as `*(p + i)` and explains the relationship between an array, its elements, and their memory addresses.

## Task 2 — Dynamic 1D Arrays

This task introduces dynamic memory allocation using `new[]`. It demonstrates how an array can be created at runtime when its size is not known beforehand. It also practices accessing elements through pointer notation and properly releasing memory using `delete[]`.

## Task 3 — Pointers with 2D Arrays

The purpose of this task is to understand pointers to rows of a two-dimensional static array. It practices the notation `*(*(rowPtr + r) + c)` for accessing elements and shows why a pointer to an array of integers is different from an `int*` or `int**`.

## Task 4 — Dynamic 2D Arrays

This task introduces dynamically allocated two-dimensional arrays using an `int**`. It demonstrates how to allocate an array of row pointers and then allocate each row separately. It also focuses on finding the student with the highest total and correctly releasing all allocated memory.

## Task 5 — Resizing a Dynamic Array

The purpose of this task is to understand that dynamically allocated arrays cannot simply be expanded by changing their size variable. It demonstrates how to allocate a larger block, copy the existing elements, add a new element, release the old block, and update the pointer.

## Task 6 — Memory Safety

This task focuses on identifying common memory-management errors in C++. It covers out-of-bounds access, incorrect use of `delete` instead of `delete[]`, dangling pointers, and memory leaks. The goal is to understand why correct memory allocation and deallocation are important even when a program appears to run successfully.

## Key Concepts

- Pointers and addresses
- Pointer arithmetic
- Static arrays
- Dynamic arrays
- Dynamic 2D arrays
- `new` and `new[]`
- `delete` and `delete[]`
- `nullptr`
- Out-of-bounds access
- Dangling pointers
- Memory leaks
