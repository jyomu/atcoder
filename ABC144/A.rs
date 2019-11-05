fn main() {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).expect("fail");
    let vec: Vec<&str> = buf.split_whitespace().collect();
    let a: u32 = vec[0].parse().unwrap();
    let b: u32 = vec[1].parse().unwrap();
    if a > 9 || b > 9 {
        println!("-1");
    } else {
        println!("{}", a * b);
    }
}
