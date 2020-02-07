I computer hanno memoria finita e la rappresentazione dei numeri avviene tramite aritmetica modulare. Questo fa si che una volta arrivati al valore massimo si ricomincia.

## C 
Il programma termina correttamente causando un integer overflow che rivela l'architettura di un sistema

## Rust
Il programma genera l' errore. 
```
thread 'main' panicked at 'attempt to multiply with overflow', arch.rs:6:13
note: run with `RUST_BACKTRACE=1` environment variable to display a backtrace.
```
Rust esegue un integer check che causa un panic dato che n è di tipo i32 e va in overflow. 
