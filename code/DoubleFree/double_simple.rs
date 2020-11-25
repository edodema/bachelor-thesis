fn main() {
    let s1 = Box::new(13);
    drop(s1);
    drop(s1);
}