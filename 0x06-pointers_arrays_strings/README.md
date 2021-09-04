# More Pointers, Arrays, and Strings

## Mandatory

### 0-strcat.c
- Concatenates second string onto first and returns pointer to first string (duplicates strcat)
    - Prototype:
        - char *_strcat(char *dest, char *src);
    - Used with:
        - 0main.c

### 1-strncat.c
- Concatenates n number of characters from second string onto first and returns pointer to first string (duplicates strncat)
    - Prototype:
        - char *_strncat(char *dest, char *src, int n);
    - Used with:
        - 1main.c

### 2-strncpy.c
- Copies n number of characters from string to destination array and returns array (duplicates strncpy)
    - Prototype:
        - char *_strncpy(char *dest, char *src, int n);
    - Used with:
        - 2main.c

### 3-strcmp.c
- Returns ASCII value difference of first non-matching character in two strings (duplicates strcmp)
    - Prototype:
        - int _strcmp(char *s1, char *s2);
    - Used with:
        - 3main.c

### 4-rev_array.c
- Reverse array of integers
    - Prototype:
        - void reverse_array(int *a, int n);
    - Used with:
        - 4main.c

### 5-string_toupper.c
- Returns string with all lowercase characters converted to uppercase
    - Prototype:
        - char *string_toupper(char *);
    - Used with:
        - 5main.c

### 6-cap_string.c
- Returns string with all letters directly after 13 specific characters capitalized
    - Prototype:
        - char *cap_string(char *);
    - Used with:
        - 6main.c

### 7-leet.c
- Returns string with specific letters (both uppercase and lowercase) converted to specific numbers
    - Prototype:
        - char *leet(char *);
    - Used with:
        - 7main.c

## Advanced


### 100-print_number.c
- Print any integer
    - Prototype:
        - void print_number(int n);
    - Used with:
        - 100main.c

### 100-rot13.c
- Returns string with all letters converted to ROT13 substitution cypher with 13 places differences
    - Prototype:
        - char *rot13(char *);
    - Used with:
        - 101main.c

## Library Function Duplication

- 0-strcat.c
- 1-strncat.c
- 2-strncpy.c
- 3-strcmp.c
