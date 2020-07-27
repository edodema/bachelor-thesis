fn main() {
    let x:&i32;
    {
        let y = 12;
        x = &y;
    }
    println!("{}", x);
}