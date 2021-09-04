# Pointers, Arrays, and Strings

## Mandatory

### 0-reset_to_98.c
- Updates value to 98 using pointer
    - Prototype:
        - void reset_to_98(int *n);
    - Used with:
        - 0main.c

### 1-swap.c
- Swaps values of two integers
    - Prototype:
        - void swap_int(int *a, int *b);
    - Used with:
        - 1main.c

### 2-strlen.c
- Returns length of string (duplicates strlen)
    - Prototype:
        - int _strlen(char *s);
    - Used with:
        - 2main.c

### 3-puts.c
- Prints string then newline (duplicates puts)
    - Prototype:
        - void _puts(char *str);
    - Used with:
        - 3main.c

### 4-print_rev.c
- Prints string in reverse (does not affect original string)
    - Prototype:
        - void print_rev(char *s);
    - Used with:
        - 4main.c

### 5-rev_string.c
- Reverses string in memory
    - Prototype:
        - void rev_string(char *s);
    - Used with:
        - 5main.c

### 6-puts2.c
- Prints every other character of string (odds)
    - Prototype:
        - void puts2(char *str);
    - Used with:
        - 6main.c

### 7-puts_half.c
- Prints second half of string
    - If string is odd, prints (length_of_string - 1) / 2 (meaning rounds down)
    - Prototype:
        - void puts_half(char *str);
    - Used with:
        - 7main.c

### 8-print_array.c
- Prints specified number of digits of integer array separated by ", "
    - Can use printf
    - Prototype:
        - void print_array(int *a, int n);
    - Used with:
        - 8main.c

### 9-strcpy.c
- Copies string to destination array (duplicates strcpy)
    - Prototype:
        - char *_strcpy(char *dest, char *src);
    - Used with:
        - 9main.c

## Advanced

### 100-atoi.c
- Converts string to integer (duplicates atoi)
    - Prototype:
        - int _atoi(char *s);
    - Used with:
        - 100main.c

## Library Function Duplication

- 2-strlen.c
- 3-puts.c
- 9-strcpy.c
- 100-atoi.c

## Learning Objectives

- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables
