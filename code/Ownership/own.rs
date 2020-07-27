fn destroy(c: Box<i32>) {
    println!("c: {}", c); // "c: 13" 
} // c esce dal suo scope

fn main() {
    let a = Box::new(13i32);
    println!("a: {}", a); // "a: 13"

    let b = a;
    //println!("a: {}", a); // ERRORE! a non e' piu' valida
    println!("b: {}", b); // "b: 13" 

    destroy(b);
    
    //println!("b: {}", b); // ERRORE! b non e' piu' valida
}