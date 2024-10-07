# libft-1337-42
In this project, you'll be building a personal library of useful functions. Here's the structure and components you'll need:

1. .c Files:
These files are where all your function implementations will reside. Each function gets its own .c file, ensuring that your library stays modular and organized.

2. Header File (.h):
Your header file serves two main purposes:

Simplifies Includes: Instead of adding #include <unistd.h> or other library references to every single .c file, you can declare them once in your header file. All your .c files will automatically access them via the header.

Connects Functions: If a function in one .c file relies on a function from another .c file, simply use #include "libft.h" in your code. This will make the function definitions available throughout your project without needing to copy code between files.

Make sure you include #include "libft.h" at the top of all your .c files to use the functions and libraries you've defined.

3. Makefile:
The Makefile will automate the compilation process for you. Rather than manually compiling each time (e.g., with gcc), you can simply type make once your Makefile is set up. It will compile your project with the necessary steps.

This saves time and effort compared to writing a main function and compiling manually as you did during the piscine.