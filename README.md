# 42Tokyo - Libft 

##  About The Project
Libft is the very first project in the 42 core curriculum. 
The goal of this project is to recreate a custom C library from scratch, encompassing standard `libc` functions alongside additional utility functions for string manipulation and linked lists. 

Since the use of standard C library functions is strictly forbidden in most 42 projects, this custom library serves as the foundational toolkit for all future assignments, providing a deep understanding of memory management, pointers, and data structures.

## Build
You can compile the library using the included Makefile:
* `make` - Compiles the source files and generates the static library (`libft.a`).
* `make clean` - Removes the object files.
* `make fclean` - Removes the object files and the generated `libft.a` library.
* `make re` - Re-compiles the entire project from scratch.

## How to Test / Use
Since this project builds a static library rather than a standalone executable, you can test it by linking `libft.a` with your own `main.c` file:
```bash
# 1. Build the library
make

# 2. Compile your test file with the library
cc main.c libft.a -o test

# 3. Run the executable
./test
```

##  Timeline
* **Duration:** [Oct 2024] - [Nov 2024]

##  Final Grade
* **100 / 100** 

##  What I Learned
Through this project, I developed a strong foundation in C programming, specifically focusing on:
* **Memory Management:** Preventing memory leaks and managing dynamic allocation safely using `malloc` and `free`.
* **String & Memory Operations:** Deep understanding of how arrays and pointers work under the hood by recreating functions like `memcpy`, `memmove`, and `split` from scratch.
* **Robustness:** Writing clean, norm-compliant code that handles edge cases gracefully without crashing (Segmentation fault prevention).