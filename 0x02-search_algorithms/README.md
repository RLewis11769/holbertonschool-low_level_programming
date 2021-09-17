# Search Algorithms

## Mandatory

### Algorithms

#### 0-linear.c
- Linear Search Algorithm (aka sequential search)
	- Sequentially checks each element in given array for match
		- Not very efficient
	- Prototype:
		- int linear_search(int *array, size_t size, int value)
	- Used with:
		- 0main.c

#### 1-binary.c
- Binary Search Algorithm (aka half-interval search, logarithmic search, or binary chop)
	- Continuously compares target value to middle element, eliminating half of array
		- Requires array sorted smallest to largest
		- Efficient with previously-sorted array - divide and conquer method
	- Prototype:
		- int binary_search(int *array, size_t size, int value)
	- Used with:
		- 1main.c

### Big O Answers

#### 2-O
- What is the time complexity (worst case) of a linear search in an array of size n?

#### 3-O
- What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

#### 4-O
- What is the time complexity (worst case) of a binary search in an array of size n?

#### 5-O
- What is the space complexity (worst case) of a binary search in an array of size n?

#### 6-O
- What is the space complexity of the following function / algorithm?
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```
## Learning Objectives

- What is a search algorithm
- What is a linear search
- What is a binary search
- What is the best search algorithm to use depending on your needs
