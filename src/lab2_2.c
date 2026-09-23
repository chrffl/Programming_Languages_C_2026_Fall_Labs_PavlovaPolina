#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
  long long result = 1;

  for (int i = 2; i <= n; i++) {
    result *= i;
  }

  return result;
}

int main(void) {
  int n;

  printf("Enter a non-negative integer n: ");
  if (scanf("%d", &n) != 1) {
    printf("Error please enter an integer.\n");
    return 1;
  }
  if (n < 0) {
    printf("Error: n cannot be negative.\n");
    return 1;
  }
  if (n > 20) {
    printf("Error: n must be 20 or less.\n");
    return 1;
  }

  printf("%d! = %lld\n", n, factorial(n));

  // TODO: validate input, call function, print result

  return 0;
}
