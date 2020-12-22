fn main() {
    let x: &Box<i32>;
    {
        let y = &Box::new(12);
        x = y;
        println!("inner y: {}", y);
        println!("inner x: {}", x);
    }
    println!("outer x: {}", x);
}