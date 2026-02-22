public class Euclid {

  public static int solve(int m, int n) {

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
    return Euclid.solve(n, r);
  }

  public static void main(String[] args) {
    System.out.println(Euclid.solve(544, 119));
  }
}

