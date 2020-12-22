fn main() {
    unsafe {
        let x = 42;
        let ptr = &x as *const i32;
        println!("Dereferencing: {}", *ptr);
    }
}