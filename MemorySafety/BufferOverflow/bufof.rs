use std::convert::TryInto;

fn main() {
    let mut arr = [0; 3];
    let mut i = 0;
    while i < 4 {
        arr[i] = i.try_into().unwrap();
        i = i+1;
    }
}
