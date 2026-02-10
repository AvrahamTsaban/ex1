# Ex1 - Bitwise Operations in C

## Overview
This program demonstrates fundamental bitwise operations and binary representations in C. All operations are implemented using **only bitwise operators** - no control flow operations (if, while, for, etc.) or logical operators (==, &&, ||, !=) are used.

## Author
- **Name:** Avraham Tsaban
- **Assignment:** Exercise 1

## License Notice
This repository may contain a license file. Please note that any such license applies **only to the code implementation** by Avraham Tsaban and does not apply to the exercise design, specifications, or instructions, which are entirely the creation of **Eliyahu Houri** as detailed in the assignment guidelines file (`ex1 - 2026.md`).

## Compilation

The program should be compiled with the following command as specified in the assignment:

```bash
gcc -std=c99 -Wall -Wextra -Werror -DNDEBUG ex1.c -o ex1.out -lm
```

## Running the Program

```bash
./ex1.out
```

**Note:** A reference binary file provided by the instructor is included as an example execution.

## Features

### 1. ASCII Character Analysis
- Accepts a single character input
- Displays its numerical (ASCII) value
- Determines if the value is even (0) or odd (1) using bitwise AND

### 2. 2's Complement Conversion
- Accepts a negative integer in 2's complement representation
- Converts and displays the value in 1's complement
- Displays the value as an unsigned integer

### 3. Bit Shifting Operations
- Accepts three integers:
  - Value to manipulate
  - Number of positions to shift right
  - Number of positions to shift left
- Performs the shifts and displays the final result

### 4. Even-Odd Majority Detection
- Accepts three integers
- Determines if at least two of them are even (outputs 0) or odd (outputs 1)
- Uses only bitwise operations for the logic

### 5. Different Number Bases
- Accepts two numbers:
  - One in octal base
  - One in hexadecimal base
- Extracts and displays the Least Significant Bit (LSB) of each
- Extracts and displays the Most Significant Bit (MSB) of each

## Technical Constraints

This program adheres to the following constraints:
- **No control flow operations** (if, while, for, switch)
- **No logical operators** (==, &&, ||, !=)
- **Only bitwise operations** are permitted

## Sample Execution

```
Ascii:
Please enter a character
A
Its numerical value is: 65
0 for even, 1 for odd: 1

2's complement to other representations:
Please enter a negative integer
-5
1's complement: 5
unsigned: 4294967291

Shifting right and left:
Please enter 3 integers
16 2 1
After shifting right and left: 8

Even - Odd:
Please enter 3 integers
2 3 4
0 - most of them are even, 1 - most of them are odd: 0

Different Bases:
Please enter two numbers in octal and hexadecimal bases
17 1A
LSBs: 1 0
MSBs: 0 0
Bye!
```

## Notes

- The program uses standard C99 features
- For complete assignment details and specifications, refer to `ex1 - 2026.md`

## Exercise Design Attribution

This exercise, including all specifications, requirements, and instructions, was designed by **Eliyahu Houri** (T.A. responsible for this exercise) as detailed in the assignment guidelines file (`ex1 - 2026.md`). Any license in this repository applies only to the code implementation and not to the exercise design itself.
