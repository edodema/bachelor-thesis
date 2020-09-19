struct Foo<'a> {
    x : &'a i32,
}

fn main() {
    let & mut x;
    { 
        let y = &10;
        let z = Foo {x: &y};
        x = z.x; 
    }
    println!("{}", x);
}