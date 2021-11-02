# Dynamic Memory Allocation
# calloc() and realloc()

## Mandatory

### 0-malloc_checked.c
- Allocates for given size passed in
	- Prototype:
		- void *malloc_checked(unsigned int b);
	- Used with:
		- 0main.c

### 1-string_nconcat.c
- Allocates for all of s1 and first n bytes of s2
	- Prototype:
		- char *string_nconcat(char *s1, char *s2, unsigned int n);
	- Used with:
		- 1main.c

### 2-calloc.c
- Allocates memory of given array and initializes each byte to 0
	- Prototype:
		- void *_calloc(unsigned int nmemb, unsigned int size);
	- Used with:
		- 2main.c

### 3-array_range.c
- Allocates array of integers from min to max (inclusive)
	- Prototype:
		- int *array_range(int min, int max);
	- Used with:
		- 3main.c

## Advanced

### 100-realloc.c
- Reallocates memory block to new size
- Unlike real realloc, does NOT copy memory
	- Prototype:
		- void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
	- Used with:
		- 100main.c

## Learning Objectives

- How to use the exit function
- What are the functions calloc and realloc from the standard library and how to use them
