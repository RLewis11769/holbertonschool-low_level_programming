# What's a pirate's favorite letter?

## Arrrrr!!!

C is an example of a low-level language.

The following projects are part of Holberton's curriculum to take a student through the fundamentals of programming using C, largely not using C's standard library.

Most projects had a 24-hour deadline. I occassionally went back to projects after completion.

Some tasks were mandatory while others were optional for a grade bonus. Ideally all mandatory tasks and any included advanced tasks are 100% accurate according to the checker with good information and necessary comments.

Some tasks included recreations of existing C library functions. These functions were then available for use in any future tasks, as well as the [printf](https://github.com/RLewis11769/printf) and [shell](https://github.com/RLewis11769/simple_shell) special partner projects.

## Navigation

### Basic
- 0x00-hello_world
- 0x01-variables_if_else_while
- 0x02-functions_nested_loops
- 0x04-more_functions_nested_loops

### Pointers, Arrays, and Strings
- 0x05-pointers_arrays_strings
- 0x06-pointers_arrays_strings
- 0x07-pointers_arrays_strings

### Advanced
- 0x08-recursion
- 0x0A-argc_argv
- 0x0B-malloc_free
- 0x0C-more_malloc_free
- 0x0F-function_pointers
- 0x10-variadic_functions
- 0x14-bit_manipulation
- 0x15-file_io

### Data Structures
- 0x0E-structures_typedef
- 0x12-singly_linked_lists
- 0x13-more_singly_linked_lists

### Libraries
- 0x09-static_libraries
- 0x18-dynamic_libraries

### Other
- 0x03-debugging
- 0x0D-preprocessor
- 0x1C-makefiles

## Library Function Duplication

### 0x02-functions_nested_loops
- 3-islower.c
- 4-isalpha.c
- 6-abs.c

### 0x04-more_functions_nested_loops
- 0-isupper.c
- 1-isdigit.c

### 0x05-pointers_arrays_strings
- 2-strlen.c
- 3-puts.c
- 9-strcpy.c
- 100-atoi.c

### 0x06-pointers_arrays_strings
- 0-strcat.c
- 1-strncat.c
- 2-strncpy.c
- 3-strcmp.c

### 0x07-pointers_arrays_strings
- 0-memset.c
- 1-memcpy.c
- 2-strchr.c
- 3-strspn.c
- 4-strpbrk.c
- 5-strstr.c

## Betty

1. Clone the betty repo (at [Betty](https://github.com/holbertonschool/Betty)) with:
```
git clone git@github.com:holbertonschool/Betty.git
```

2. cd into the new Betty directory

3. Install the linter with:
```
sudo ./install.sh
```

4. Copy the following into a file called betty to be able to betty multiple files at once:
```
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```

This doesn't need to be done in the Betty directory because the betty file will be moved but why not.

5. Add execution permission for all users with:
```
sudo chmod a+x betty
```

6. Move the betty file into the path with:
```
sudo mv betty /bin/
```

The Betty directory will stay where it is alongside the directories of any siblings containing files to be Bettied.

7. Run the linter with:
```
betty filename.c
```
