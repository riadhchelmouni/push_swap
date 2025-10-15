```push_swap/
│
├── Makefile
├── push_swap.c
├── push_swap.h
├── algo.c
├── swaps.c
├── mnd.c
├── ored.c
├── rb.c
├── rsp.c
├── sss.c
│
├── bns/               # Bonus files for the "checker" program
│   ├── checker.c
│   ├── checker1.c
│   ├── checker2.c
│   ├── checker3.c
│   ├── checker4.c
│   ├── checker.h
│   └── gnl.c
│
└── libft/             # Custom C standard library implementation
    ├── Makefile
    ├── ft_atoi.c
    ├── ft_bzero.c
    ├── ft_calloc.c
    ├── ft_isalnum.c
    └── ...
```
This looks like your 42 school "push_swap" project, where you implement a sorting algorithm using stack operations.

Here’s a professional README.md for your GitHub repo 👇

🧠 Push_Swap

# Push_Swap 
is an algorithmic project written in C that sorts a stack of integers using a limited set of operations.
The goal is to sort the numbers in ascending order using the smallest possible number of moves.

# 🚀 About the Project

The project implements two main programs:

push_swap: Generates a list of operations to sort numbers.

checker (bonus): Verifies whether a given sequence of operations correctly sorts the stack.

It uses two stacks (A and B) and a restricted set of operations (sa, pb, ra, etc.) to sort data efficiently.
The challenge lies in implementing an optimized algorithm that minimizes the total number of moves.

# ⚙️ Features

Implements all required stack operations:
sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr

 Handles invalid input and duplicates

 Includes a bonus checker program for validation

 Optimized sorting algorithm for large data sets

 Includes a custom libft library implementation

# 🧩 Project Structure 
```
push_swap/
│
├── Makefile              # Compilation rules
├── push_swap.c           # Main program logic
├── algo.c                # Sorting algorithms
├── swaps.c               # Swap operations
├── rb.c, rsp.c, sss.c    # Rotation & push operations
├── mnd.c, ored.c         # Utility and helper functions
│
├── bns/                  # Bonus: checker program
│   ├── checker.c, checker1-4.c
│   ├── checker.h
│   └── gnl.c
│
└── libft/                # Custom standard C library
    ├── ft_atoi.c, ft_calloc.c, ...
    └── Makefile
```
# 🛠️ Compilation

Compile both push_swap and checker using make:
```
make        # builds push_swap
make bonus  # builds checker (bonus)
make clean  # removes object files
make fclean # removes binaries
make re     # rebuilds everything
```
# ▶️ Usage
1. Run Push_Swap
```
./push_swap 4 67 3 87 23
```
Output example:
```
pb
pb
sa
pa
pa
```
2. Verify with Checker (Bonus)
```
./push_swap 2 1 3 6 5 8 | ./checker 2 1 3 6 5 8
```
Output:
```
OK
```
# 📈 Algorithm Overview

Small stacks (≤ 5 elements): Uses simple swap and rotate operations.

Large stacks (> 5 elements): Uses a divide-and-conquer approach (chunk sorting / radix sort).

The algorithm is designed to minimize the total number of operations.

# 🧰 Technologies Used

Language: C

Compiler: gcc

Build System: Makefile

Libraries: Custom libft

# 🧑‍💻 Author

Yazid Riadh Chelmouni
📍 Based in Germany
🔗 GitHub: riadhchelmouni

# 📜 License

This project is licensed under the MIT License — feel free to use and modify it.
