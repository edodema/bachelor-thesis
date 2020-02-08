fn main() {
    let p = f();
    println!("{:?}", p);
}

fn f() -> *const i32 {
    let x = 1;
    let p: *const i32 = &x;
    println!("{:?}", p);
    p
}
