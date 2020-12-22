fn check_optional(optional: Option<Box<i32>>) {
    match optional {
        Some(p) => println!("Si ha il valore {}", p),
        None => println!("Non si ha alcun valore"),
    }
}

fn main() {
    let optional = None;
    check_optional(optional);
    let optional = Some(Box::new(42));
    check_optional(optional);
}