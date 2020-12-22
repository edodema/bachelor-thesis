fn main() {
    let x: &i32;
    {
        let y = 12;
        x = &y;
        println!("inner y: {}", y);
        println!("inner x: {}", x);
    }
    println!("outer x: {}", x);
}