fn ret() -> *const i32 {
    let n = 42;
    let p = &n as *const i32;
    p
}

fn main() {
    let p = ret();
    println!("{:?}", p); 
}
