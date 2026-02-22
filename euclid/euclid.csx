using System;

class Euclid {

  private static int r;

  public static int Solve(int m, int n) {

    // E0
    if (n > m) {
      int t = m;
      m = n;
      n = t;
    }

    // E1
    Euclid.r = m % n;

    // E2
    if (Euclid.r == 0) {
      return n;
    }

    // E3
    return Solve(n, Euclid.r);
  }
}

Console.WriteLine("{0}", Euclid.Solve(544, 119));
