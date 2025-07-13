extern crate mathlib;

#[test]
fn test_add() {
    assert_eq!(mathlib::add(2, 2), 5);
}

#[test]
fn test_sub() {
    assert_eq!(mathlib::sub(5, 4), 2);
}
