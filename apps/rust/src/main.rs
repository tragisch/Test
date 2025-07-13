use std::env;
extern crate mathlib;

// a main to test the library
fn main() {
    let args: Vec<String> = env::args().collect();
    if args.len() != 3 {
        eprintln!("Usage: {} <a> <b>", args[0]);
        std::process::exit(1);
    }
    let a: i32 = args[1].parse().expect("Invalid number for a");
    let b: i32 = args[2].parse().expect("Invalid number for b");
    let sum = mathlib::add(a, b);
    let diff = mathlib::sub(a, b);
    println!("Sum: {}", sum);
    println!("Difference: {}", diff);
    println!("Library linked successfully.");
}