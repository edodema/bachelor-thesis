Si ha buffer over-read quando si prova leggere da una locazione di memoria fuori dai limiti del buffer.

## C
Il programma accede alle locazioni di memoria fuori dai limiti dell'array.

## Rust
Il programma stampa i valori legali e quando esce fuori dai limiti dell'array genera il seguente errore  
```
thread 'main' panicked at 'index out of bounds: the len is 4 but the index is 4', bufof.rs:6:24
note: run with `RUST_BACKTRACE=1` environment variable to display a backtrace.
```
il controllo viene fatto dinamicamente e si verifica che l'indice sia coerente con la lunghezza dell'array.
