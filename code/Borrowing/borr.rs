fn borrow(c: &Box<i32>) {
    println!("c: {}", c); // "c: 13" 
} // c esce dal suo scope

fn main() {
    let a = Box::new(13i32);
    let b = &a;

    println!("b: {}", b); // "b: 13" 
    borrow(b); // "c: 13"
    println!("a: {}", a); // "a: 13" 

}