# User-Defined Functions and Nested Loops

## Mandatory

### holberton.h
- Header file

### 0-holberton.c
- Prints "Holberton" string

### 1-alphabet.c
- Prints alphabet in lowercase
    - Can only use putchar 2 times
    - Prototype:
        - void print_alphabet(void)
    - Used with:
        - 1main.c

### 2-print_alphabet_x10.c
- Prints alphabet in lowercase 10 times
    - Can only use putchar 2 times
    - Prototype:
        - void print_alphabet_x10(void)
    - Used with:
        - 2main.c

### 3-islower.c
- Returns true/false if lowercase
    - Prototype:
        - int _islower(int c)
    - Used with:
        - 3main.c

### 4-isalpha.c
- Returns true/false if letter (lowercase or uppercase)
    - Prototype:
        - int _isalpha(int c)
    - Used with:
        - 4main.c

### 5-sign.c
- Returns and prints if number is greater than 0, less than 0, or 0
    - Prototype:
        - int print_sign(int n)
    - Used with:
        - 5main.c

### 6-abs.c
- Returns absolute value of number
    - Prototype:
        - int _abs(int)
    - Used with:
        - 6main.c

### 7-print_last_digit.c
- Prints last digit of number
    - Prototype:
        - int print_last_digit(int)
    - Used with:
        - 7main.c

### 8-24_hours.c
- Prints minutes of day 00:00 to 23:59 (1440 lines)
    - Run with ./a.out | wc -l to find number of lines
    - Prototype:
        - void jack_bauer(void)
    - Used with:
        - 8main.c

### 9-times_table.c
- Prints 9 times table with commas
    - Prototype:
        - void times_table(void)
    - Used with:
        - 9main.c

### 10-add.c
- Returns sum of two numbers
    - Prototype:
        - int add(int, int)
    - Used with:
        - 10main.c

### 11-print_to_98.c
- Prints numbers to 98 with commas based on number passed in
    - Can use standard library
    - Prototype:
        - void print_to_98(int n)
    - Used with:
        - 11main.c
        
## Advanced

### 100-times_table.c
- Prints times table with commas of number passed in (between 0 to 15)
    - Prototype:
        - void print_times_table(int n)
    - Used with:
        - 100main.c

### 101-natural.c
- Prints sum of multiples of 3 or 5 (specifically for 1024)
    - Can use standard library

### 102-fibonacci.c
- Prints first 50 Fibonacci numbers
    - Can use standard library

## Library Function Duplication

- 3-islower.c
- 4-isalpha.c
- 6-abs.c

## Learning Objectives
- What are nested loops and how to use them
- What is a function and how do you use them
- What is the difference between a declaration and a definition of a function
- What is a prototype
- What is the scope of variables
- What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
- What are header files and how to to use them with #include
