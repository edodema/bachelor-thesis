fn main() {
    let s1: &String;
    {
        let s2 = String::from("Hello");
        s1 = &s2;
    }
    println!("{}", s1);
}
