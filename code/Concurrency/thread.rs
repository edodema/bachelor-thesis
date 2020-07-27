use std::thread;
use std::sync::mpsc;

fn main() {
    // tx is the transmitter or sender 
    // rx is the receiver
    let (tx, rx) = mpsc::channel();

    for i in 0..10 {
        let tx = tx.clone();

        thread::spawn(move || {
            let answer = i * i;
            
            tx.send(answer).unwrap();
        });
    }

    for _ in 0..10 {
        println!("{}", rx.recv().unwrap());
    }
}