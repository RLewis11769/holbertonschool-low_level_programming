# Static Libraries

## Navigation

### Tasks

#### 0. libholberton.a
- Created static library
	- Nonstandard library names start with "lib" by convention
	- .a is the extension indicating a static library

#### 1. create_static_lib.sh
- Script that creates a static library from .c files in directory
	- gcc -c *.c
		- Create .o files from all .c files in directory (stop compilation before linking)
	- ar -rc liball.a *.o
		- Add all .o files in directory to new library called "liball.a"
	- ranlib liball.a
		- Add index to library (can add at any time)

### Reference Files

#### holberton.h
- Header file containing prototypes of all functions in library
	- To use library, add include directive as seen in main.c:
		- #include "holberton.h"

#### main.c
- Demo file that uses _strlen
	- Compile with:
		- gcc main.c -L. libholberton.a

#### library.txt
- Reference to the functions in libholberton.a

## Notes

- To recreate libholberton.a, would need to create files including functions found in library.txt
- To create library, add files, and add index all at once:
	- ar -rcs liball.a *.o
- To view contents of library, use:
	- nm libholberton.a

## References

idk [this one's](https://www.linkedin.com/pulse/shared-vs-static-libraries-rachel-lewis/?trackingId=ctjD5QA%2BTUqYAOghGcGdvA%3D%3D) pretty good

## Learning Objectives

- What is a static library, how does it work, how to create one, and how to use it
- Basic usage of ar, ranlib, nm
