fn longest<'a>(x: &'a str, y: &'a str) -> &'a str {
    if x.len() > y.len() { x }
    else { y }
}

fn main() {
    let s1 = String::from("short");
    let s2 = String::from("long");
    let result;
    {
        let rs1 = &s1;
        let rs2 = &s2;
        result = longest(rs1, rs2);
    }
    println!("The longest string is {}", result);
}