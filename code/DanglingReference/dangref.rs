fn main() {
    let s1;
    {
        let s2 = &"asa nisi masa";
        s1 = s2;
    }
    println!{"{}", s1};
}
