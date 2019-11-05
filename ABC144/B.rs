fn main() {
    let mut s = String::new();
    std::io::stdin().read_line(&mut s).unwrap();
    println!(
        "{}",
        if (1..10).any(|x| {
            let z = s.trim().parse::<i32>().unwrap();
            return z % x == 0 && z / x < 10;
        }) {
            "Yes"
        } else {
            "No"
        }
    );
}
