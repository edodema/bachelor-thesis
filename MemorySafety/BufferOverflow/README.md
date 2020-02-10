Si ha un buffer overflow/overrun quando si tenta di scrivere oltre i confini di un buffer, invadendo quindi memoria che potrebbe appartenere ad altro codice.

## C 
L'esecuzione non dà problemi e si riesce a scrivere fuori dall'array (anche a leggere, vedere `BufferOverrun`). 

## Rust
In Rust non è possibile scrivere fuori dai confini della memoria assegnata e viene generato dinamicamente il seguente output
```
thread 'main' panicked at 'index out of bounds: the len is 3 but the index is 3', bufof.rs:7:9
note: run with `RUST_BACKTRACE=1` environment variable to display a backtrace.
```
Suppongo il controllo non venga fatto staticamente per alleggerire di carico il compilatore. 
