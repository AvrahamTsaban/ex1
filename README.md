# Exercise 1 — Bitwise Operations

## Overview

A C program demonstrating fundamental bitwise operations and binary representations. All logic is implemented using **only bitwise operators** — no control flow (if/while/for), logical operators (==, &&, ||, !=), or additional functions are used.

## Author

Avraham Tsaban

## Compilation

```bash
gcc -std=c99 -Wall -Wextra -Werror -DNDEBUG ex1.c -o ex1.out -lm
```

## Running

```bash
./ex1.out
```

## Tasks

1. **ASCII Character Analysis** — Reads a character, prints its ASCII value, and determines even/odd using bitwise AND.
2. **2's Complement Conversion** — Converts a negative integer from 2's complement to 1's complement and unsigned representation.
3. **Bit Shifting** — Accepts a value and two shift amounts, performs right then left shift, and displays the result.
4. **Even-Odd Majority** — Given three integers, determines whether the majority are even or odd using bitwise operations only.
5. **Number Bases (Octal & Hex)** — Reads an octal and a hexadecimal number, extracts and prints the LSB and MSB of each.

## Code Structure

The entire program resides in a single `main()` function with no helper functions — as required by the exercise constraints (no custom functions, no control flow). The five tasks execute sequentially, each reading input via `scanf`/`getchar` and producing output via `printf`. Key techniques:

- **Even/odd detection** — `value & 1`
- **1's complement** — `-(~value)`
- **Majority vote** — pairwise AND of LSBs: `(a&b) | (b&c) | (a&c)`
- **MSB extraction** — mask with `1 << 31`, then shift back

## Project Files

| File | Description |
|------|-------------|
| `ex1.c` | Source code |
| `ex1.example` | Reference Linux executable provided by the TA |
| `ex1_instructions.md` | Exercise instructions |

## Attribution

The exercise design, specifications, and instructions were created by **Eliyahu Houri**, the Teaching Assistant responsible for this assignment. The instructions file (`ex1_instructions.md`) and the reference executable (`ex1.example`) are his work. Any license in this repository applies only to the student's code implementation.
