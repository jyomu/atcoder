fn main() {
    let mut s = String::new();
    std::io::stdin().read_line(&mut s).unwrap();
    let n = s.trim().parse::<i64>().unwrap();
    let mut v: Vec<i64> = Vec::new();
    for x in 1..(n as f64).sqrt() as i64 + 1 {
        let y = n / x;
        if x * y == n {
            v.push(x + y - 2);
        }
    }
    v.sort();
    println!("{}", v[0]);
}
