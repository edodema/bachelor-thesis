Una free di un puntatore non valido può causare problemi all'heap.

## C
In C sembra si possa eseguire il codice con errore generato dinamicamente, sembrerebbe da OSX.
```
invfree_c(26763,0x10a76a5c0) malloc: *** error for object 0x10a6c9036: pointer being freed was not allocated
invfree_c(26763,0x10a76a5c0) malloc: *** set a breakpoint in malloc_error_break to debug
Abort trap: 6
```

## Rust
In Safe Rust la memoria non si può gestire manualmente. 
