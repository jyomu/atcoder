use std::io::BufRead;
fn main() {
    let stdin = std::io::stdin();
    let mut lines: Vec<Vec<i64>> = stdin
        .lock()
        .lines()
        .map(|l| {
            l.unwrap()
                .split_whitespace()
                .map(|w| w.parse().unwrap())
                .collect()
        })
        .collect();
    let (_n, k, mut al, mut fl) = (lines[0][0], lines[0][1], lines.remove(1), lines.remove(1));
    if al.iter().sum::<i64>() <= k {
        println!("0");
        return;
    } else {
        al.sort();
        al.reverse();
        fl.sort();
        let list: Vec<_> = al.iter().zip(fl.iter()).collect();
        let mut lp: i64 = 1;
        let mut rp: i64 = 1 << 60;
        let mut mp: i64;
        while rp - lp > 1 {
            mp = (lp + rp) / 2;
            let sum: i64 = list
                .iter()
                .filter(|x| (x.0 * x.1) > mp)
                .map(|x| x.0 - (mp / x.1))
                .sum();
            if sum <= k {
                rp = mp;
            } else {
                lp = mp;
            }
        }
        println!("{}", rp);
    }
}
