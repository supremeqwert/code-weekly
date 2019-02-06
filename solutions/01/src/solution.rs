// compile with `rustc src/solution.rs` from the solutions/01 directory
use std::env;

/// Computes n^k in O(lg(n)) time through exponentiation by squaring.
/// Base Case: n^0 = 1
/// Base Case: n^1 = n
/// If k = 2q:
///     q = k / 2
///     n^k = n^(2q) = (n^2)^q = (n^2)^(k / 2)
/// If k = 2q + 1:
///     q = (k - 1) / 2
///     n^k = n^(2q + 1) = n * (n^2)^q = n * (n^2)^((k-1) / 2)
/// Observe that this runs in logarithmic time because the number of times the partial exponent
/// is to be squared halves on each iteration (k / 2).
fn exp(n: u32, k: u32) -> u32 {
    if k == 0 {
        return 1;
    } else if k == 1 {
        return n;
    }

    match k % 2 {
        0 => exp(n * n, k / 2),           // k is even
        1 => n * exp(n * n, (k - 1) / 2), // k is odd
        _ => unreachable!(),
    }
}

fn main() {
    let args: Vec<String> = env::args().collect();
    let n = args[1].parse::<u32>().unwrap();
    println!("{}", exp(n, n));
}
