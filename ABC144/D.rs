fn print_typename<T>(_: T) {
    println!("{}", std::any::type_name::<T>());
}

fn main() {
    let mut s = String::new();
    std::io::stdin().read_line(&mut s).unwrap();
    let v = s
        .split_whitespace()
        .map(|w| w.parse().unwrap())
        .collect::<Vec<f64>>();
    let (a, b, x) = (v[0], v[1], v[2]);
    let square = x / a;
    if square < a * b / 2f64 {
        let deg1 = (b * b / 2f64 / square).atan() / std::f64::consts::PI * 180f64;
        println!("{}", deg1);
    } else {
        let deg2 = (2f64 / a / a * (a * b - square)).atan() / std::f64::consts::PI * 180f64;
        println!("{}", deg2);
    }
}
