# C / GCC Basics

## Mandatory

### GCC Basics

#### 0-preprocessor
- Stops GCC after preprocessor stage and saves in file

#### 1-compiler
- Stops GCC after compiling stage (create .o file)

#### 2-assembler
- Stops GCC after assembly stage (create .s file)

#### 3-name
- Allows GCC to complete compiling and create named executable output file

### C Basics

#### 4-puts.c
- puts prints line followed by newline
	- Must use puts

#### 5-printf.c
- printf prints line without newline
	- Must use printf

#### 6-size.c
- Prints sizes of data types (based on computer)
	- Uses sizeof
	- char
	- int
	- long int
	- long long int
	- float

## Advanced

### 100-intel
- Stop GCC after assembly but in Intel syntax (create .s file)

### 101-quote.c
- Print to standard error
	- Uses write

## Learning Objectives
- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type gcc main.c
- What is an entry point
- What is the "main" function
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator sizeof
- How to compile using gcc
- What is the default program name when compiling with gcc
- How to check your code official Holberton C coding style Betty
- How to find the right header to include in your source code when using a standard library function
- What is the return value of a program
- How does the main function influence the return value of the program
