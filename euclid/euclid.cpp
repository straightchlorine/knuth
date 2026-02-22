#include <iostream>

class Euclid {
private:
  int r = -1;

public:
  int solve(int m, int n);
};

int Euclid::solve(int m, int n) {

  // E0
  if (m < n) {
    int t = m;
    m = n;
    n = t;
  }

  // E1
  r = m % n;

  // E2
  if (r == 0) {
    return n;
  };

  // E2
  return solve(n, r);
}

int main() {
  Euclid euclid;
  int result = euclid.solve(544, 119);
  std::cout << result << std::endl;
  return result;
}
