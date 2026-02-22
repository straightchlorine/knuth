struct Euclid;

impl Euclid {
    pub fn solve(mut m: u16, mut n: u16) -> u16 {
        if n > m {
            std::mem::swap(&mut m, &mut n);
        }
        if n == 0 {
            return m;
        }
        Euclid::solve(n, m % n)
    }
}

fn main() {
    println!("{}", Euclid::solve(544, 119));
}
