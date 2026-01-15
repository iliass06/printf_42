*This project has been created as part of the 42 curriculum by iel-fadi.*

## Description
The goal of this project is to recode the famous printf() function from the C standard library (libc). The function ft_printf mimics the original behavior, writing formatted output to the standard output. It manages various format specifiers and handles a variable number of arguments using the standard <stdarg.h> macros.

### Prototype
    int ft_printf(const char *format, ...);

### Supported Conversions
The function manages the following format specifiers:

* %c : Prints a single character.
* %s : Prints a string (as defined by the common C convention).
* %p : The void * pointer argument has to be printed in hexadecimal format.
* %d : Prints a decimal (base 10) number.
* %i : Prints an integer in base 10.
* %u : Prints an unsigned decimal (base 10) number.
* %x : Prints a number in hexadecimal (base 16) lowercase format.
* %X : Prints a number in hexadecimal (base 16) uppercase format.
* %% : Prints a percent sign.

## Instructions

### Compilation
To compile the library libftprintf.a, run the following command in the root directory:

    make

### Usage
To use the library in your code:

1. Include the header file:

    #include "ft_printf.h"

2. Compile your file with the library:

    cc main.c libftprintf.a -o my_program

### Cleaning
To remove object files:

    make clean

To remove object files and the compiled library:

    make fclean

## Algorithm and Data Structures

### Data Structures
This project relies on the Stack memory via the va_list type from <stdarg.h>. This allows direct access to function arguments passed on the stack without complex data structures like linked lists or dynamic allocation (malloc), ensuring memory efficiency.

### Algorithm
The core logic follows a linear parsing approach (O(n)):

1. Initialization: The function initializes a va_list with va_start to track arguments.

2. Parsing Loop: It iterates through the format string character by character.
   - Regular Characters: If the character is not %, it is immediately written to the output.
   - Format Specifiers: If a % is encountered, the algorithm checks the subsequent character to identify the type.

3. Dispatching: A dedicated function (ft_type) redirects the flow to specific helper functions (like ft_putstr, ft_puthex).

4. Type Handling:
   - Promotions: char arguments are retrieved as int due to default argument promotions.
   - Hexadecimal Precision: Numbers are cast to unsigned int (for %x) or unsigned long (for %p) to handle bit representation correctly.

5. Completion: Finally, va_end cleans up the list, and the total count of printed characters is returned.

## Resources

### References
* man 3 printf
* man stdarg
