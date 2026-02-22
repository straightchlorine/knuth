"""
Implementation of Euclid's algorithm from section 1.1.
"""


class Euclid:

    r = -1

    @classmethod
    def solve(self, m: int, n: int) -> int:
        """Recursively find GCD of m and n."""

        if m <= 0 or n <= 0 or self.r < 0:
            raise ValueError("m and n must be positive integers and r must be non-negative")

        # E0
        if m < n:
            t = m
            m = n
            n = t

        # E1
        self.r = m % n

        # E2
        if self.r == 0:
            return n

        # E3
        return self.solve(n, self.r)

if __name__ == "__main__":
    print(Euclid.solve(119, 544))
