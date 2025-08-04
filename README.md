# Recursion Algorithms in C

This repository contains some classic recursion algorithms implemented in C. Below, you'll find a detailed explanation of how recursion works, its advantages, and examples of commonly used recursive algorithms.

## What is Recursion?

Recursion is a programming technique in which a function **calls itself** to solve a problem. Instead of solving the problem directly, the function **breaks it into smaller subproblems** and solves each of them in a similar way.

This approach is especially useful in recursive data structures (like trees), search algorithms and in generating combinations, 
permutations and subsets.

## How does a recursive function work?

A recursive function usually has two main parts:

1. **Base case (or stopping condition):**
   - This is the condition that ends the recursion.
   - Prevents infinite function calls.
   - Example: `if (p == 1) return n;`

2. **Recursive function call:**
   - This is where a function calls itself with a smaller part of the problem.
   - Example: `return n * power(n, p-1);`

## Advantages of Recursion

- Simplicity and readability for certain problems  

- Reduces code complexity  

- Solves problems that are inherently recursive  

- Easier to implement divide-and-conquer strategies  

- Makes backtracking algorithms cleaner  

- Closer to mathematical definitions  

- Reduces manual stack management  

# Available Algorithms

This repository includes the following recursive algorithms implemented in C:

- **[Factorial](./fatorial.c)**
- **[Fibonacci sequence](./fibonacci.c)**
- **[Power of a number](./potencia.c)**
- **[Sum of elements in an array](./somaArray.c)**
- **[Power set (subset generation)](./conjuntoPotencia.c)**
- **[Towers of Hanoi](./hanoi.c)**
- **[Binary search](./buscaBinaria.c)**
- **[Greatest common divisor (GCD)](./calculaMDC.c)**
- **[Count digit occurrences](./contaNum.c)**
- **[Reverse an array](./inverteArray.c)**
- **[Reverse a number](./inverteNumero.c)**
- **[Find all prime numbers up to N](./primo.c)**
- **[Merge two sorted arrays](./uneArrays.c)**
- **[Convert integer to binary](./converteBinario.c)**
- **[Calculate summation up to N](./somatorio.c)**

## Simple example: power of a number

```c
int power (int n, int p)
{
  if (p == 1)
  {
    return n;
  }
  else
  {
    return n * power (n, p-1);
  }
}
```

## How to compile 

```bash
gcc fibonacci.c -o fibonacci
./fibonacci
```