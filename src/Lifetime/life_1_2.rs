fn main() {
    let x: &Box<i32>;
    {
        let y = &Box::new(13);
        x = y;
    }
    println!("{}", x);
}