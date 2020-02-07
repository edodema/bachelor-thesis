## C
L'esecuzione va a termine e si riesce ad accedere ad un valore fuori dal suo scope.

## Rust
In Rust la riga `println!("Esterno:\t{:?} -> {}", p_out, *p_out);` genera un errore perché Rust non ammette il dereferncing di un raw pointer.  
