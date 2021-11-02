# Now we are learning about dynamic memory allocation with malloc() and free()

## Valgrind

### Install

```
sudo apt-get install valgrind
```

### Basic command:

```
valgrind ./a.out
```

To see where uninitialized values come from:

```
valgrind --track-origins=yes ./a.out
```

GCC's -g flag retains source-level debugging/symbol information in the executable itself aka keeps track of line numbers. To see line numbers where leak started:

```
gcc -g filename.c
valgrind --leak-check=full ./a.out
```

### Looking for:

```
total heap usage: X allocs, X frees
All heap blocks were freed -- no leaks are possible
ERROR SUMMARY: 0 errors from 0 contexts
```

## Mandatory

### 0-create_array.c
- Allocates array of characters and initializes with given character
	- Prototype:
		- char *create_array(unsigned int size, char c);
	- Used with:
		- 0main.c

### 1-strdup.c
- Allocates new array which contains copy of given string
	- Prototype:
		- char *_strdup(char *str);
	- Used with:
		- 1main.c

### 2-str_concat.c
- Allocates array which contains copy of s1 string then s2 string (concatenated)
	- Prototype:
		- char *str_concat(char *s1, char *s2);
	- Used with:
		- 2main.c

### 3-alloc_grid.c
- Allocates 2d grid of integers based on width and height
	- Prototype:
		- int **alloc_grid(int width, int height);
	- Used with:
		- 3main.c
	- Note:
		- Contains Valgrind/Memcheck leaks as is (fixed in 4)

### 4-free_grid.c
- Frees 2d grid of integers created by 3-alloc_grid.c
	- Prototype:
		- void free_grid(int **grid, int height);
	- Used with:
		- 4main.c

## Advanced

### 100-argstostr.c
- Allocates for all arguments typed in argc/argv
	- Prototype:
		- char *argstostr(int ac, char **av);
	- Used with:
		- 100main.c
	- Example:
	```
	$ ./a.out hello world
	./a.out
	hello
	world
	```

## Learning Objectives

- What is the difference between automatic and dynamic allocation
- What are malloc and free and how to use them
- Why and when use malloc
- How to use valgrind to check for memory leak
