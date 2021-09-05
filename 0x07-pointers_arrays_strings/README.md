# More Pointers, Arrays, and Strings

## Mandatory

### 0-memset.c
- Returns pointer to memory area with first n bytes filled with one specific character (duplicates memset)
    - Prototype:
        - char *_memset(char *s, char b, unsigned int n);
    - Used with:
        - 0main.c

### 1-memcpy.c
- Returns pointer to memory area with first n bytes from second string copied into first (duplicates memcpy)
    - Prototype:
        - char *_memcpy(char *dest, char *src, unsigned int n);
    - Used with:
        - 1main.c

### 2-strchr.c
- Return pointer to location where specified character is found within string (duplicates strchr)
    - Prototype:
        - char *_strchr(char *s, char c);
    - Used with:
        - 2main.c

### 3-strspn.c
- Return number of bytes in string that also exist in comparison string (duplicates strspn)
    - Prototype:
        - unsigned int _strspn(char *s, char *accept);
    - Used with:
        - 3main.c

### 4-strpbrk.c
- Return pointer to location in string where first byte exists that is also in comparison string (duplicates strpbrk)
    - Prototype:
        - char *_strpbrk(char *s, char *accept);
    - Used with:
        - 4main.c

### 5-strstr.c
- Return pointer to location in string where comparison string exists exactly (duplicates strstr)
    - Prototype:
        - char *_strstr(char *haystack, char *needle);
    - Used with:
        - 5main.c

### 7-print_chessboard.c
- Print 2D array/matrix
    - Prototype:
        - void print_chessboard(char (*a)[8]);
    - Used with:
        - 7main.c

### 8-print_diagsums.c
- Print sums of both diagonals in 2D array/matrix
    - Prototype:
        - void print_diagsums(int *a, int size);
    - Used with:
        - 8main.c

## Advanced

### 100-set_string.c
- Set value of pointer to character
    - Prototype:
        - void set_string(char **s, char *to);
    - Used with:
        - 100main.c

## Library Function Duplication

- 0-memset.c
- 1-memcpy.c
- 2-strchr.c
- 4-strpbrk.c
- 5-strstr.c
