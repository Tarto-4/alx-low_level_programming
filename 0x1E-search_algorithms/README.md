# Search Algorithms

This repository contains C programs that implement various search algorithms. Each algorithm is implemented in a separate C file and documented according to the project requirements.

## Files

- `0-linear.c`: Implementation of the Linear Search algorithm.
- `1-binary.c`: Implementation of the Binary Search algorithm.
- `2-O`: Text file documenting the time complexity (worst case) of Linear Search.
- `3-O`: Text file documenting the space complexity (worst case) of Iterative Linear Search.
- `4-O`: Text file documenting the time complexity (worst case) of Binary Search.
- `5-O`: Text file documenting the space complexity (worst case) of Binary Search.
- `6-O`: Text file documenting the space complexity of a specific function `allocate_map`.

## Compilation

All C files are compiled on Ubuntu 20.04 LTS using gcc with the following flags:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 FILENAME.c -o OUTPUT_FILE

javascript


Replace `FILENAME.c` with the name of the C file you want to compile and `OUTPUT_FILE` with the desired output executable name.

## Usage

To compile and run the programs, follow these steps:
1. Clone this repository:

git clone https://github.com/tarto-4/0x1E-search_algorithms.git

css

2. Navigate to the directory:

cd 0x1E-search_algorithms

mathematica

3. Compile the desired C file:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-linear.c -o 0-linear

markdown

4. Run the compiled executable:

./0-linear

c


Repeat steps 3-4 for other C files as needed (`1-binary.c`, `2-O`, etc.).

## Examples

Here are examples of how to use the search algorithms:

### Linear Search
```c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int main(void)
{
 int array[] = {10, 1, 42, 3, 4, 42, 6, 7, -1, 9};
 size_t size = sizeof(array) / sizeof(array[0]);

 printf("Found %d at index: %d\n", 3, linear_search(array, size, 3));
 printf("Found %d at index: %d\n", 42, linear_search(array, size, 42));
 printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));

 return (EXIT_SUCCESS);
}

Binary Search

c

#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int main(void)
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));

    return (EXIT_SUCCESS);
}

Authors

@Tarto-4
