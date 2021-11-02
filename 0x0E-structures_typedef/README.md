# Structs


![Dog struct](https://github.com/RLewis11769/holbertonschool-low_level_programming/blob/main/0x0E-structures_typedef/Cricket.jpg)

## Tasks

### dog.h
- Define struct with name, age, and owner
	- Used for:
		- 1-init_dog.c
		- 2-print_dog.c

### 1-init_dog.c
- Initialize instance of struct dog
	- Used with:
		- 1main.c

### 2-print_dog.c
- Print information in struct dog (strings as "(nil)" if NULL)
	- Used with:
		- 2main.c

### dog.h
- Typedef struct defined in dog.h as dog_t
	- Used for:
		- 4-new_dog.c
		- 5-free_dog.c

### 4-new_dog.c
- Creates new instance of dog
	- Used with:
		- 4main.c

### 5-free_dog.c
- Frees memory of dog struct
- Valgrind "All heap blocks were freed -- no leaks are possible"
	- Used with:
		- 5main.c

## Learning Objectives

- What are structures, when, why and how to use them
- How to use typedef
