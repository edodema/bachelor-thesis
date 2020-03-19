fn main() {
    let s: &String;
    {
        let s2 = String::from("Hello");
        s = & s2;
    }
    println!("{}", s);
}
