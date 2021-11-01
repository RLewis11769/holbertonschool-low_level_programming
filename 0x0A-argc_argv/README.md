# Arguments to Main (argc and argv)

## Prototype
int main(int argc, char *argv[])
**OR**
int main(int argc, char **argv)

## Mandatory

### 0-whatsmyname.c
- Prints program name
	- Example:
	```
	$ gcc 0-whatsmyname.c
	$ ./a.out
	./a.out
	$ mv a.out mynewname
	$ ./mynewname
	./mynewname
	```

### 1-args.c
- Prints number of arguments passed in
	- Example:
	```
	$ ./a.out
	0
	$ ./a.out "hello world"
	1
	$ ./a.out jkjdf djkj akl djk ajki
	5
	```

### 2-args.c
- Prints each argument passed in on new line
	- Example:
	```
	$ ./a.out hello world this is fun
	./a.out
	hello
	world
	this
	is
	fun
	```

### 3-mul.c
- Multiplies any two numbers
	- Example:
	```
	$ ./a.out -245 3245342
	-795108790
	$ ./a.out
	Error
	```

### 4-add.c
- Adds positive numbers
	- Example:
	```
	$ ./a.out 1 10 100 1000
	1111
	$ ./a.out 1 2 3 e 4 5
	Error
	$ ./a.out
	0
	```

## Learning Objectives
- What information is held in argv and argc
- How to use arguments passed to your program
- What are two prototypes of main that you know of, and in which case do you use one or the other
- How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters
