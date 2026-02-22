#include <stdio.h>

int solve(int m, int n) {

  // E0
  if (n > m) {
    int t = m;
    m = n;
    n = t;
  }

  // E1
  int r = m % n;

  // E2
  if (r == 0) {
    return n;
  }

  // E3
  return solve(n, r);
}

int main() { printf("%d\n", solve(544, 119)); }
