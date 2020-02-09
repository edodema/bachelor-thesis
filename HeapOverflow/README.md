Si ha heap overflow quando la memoria allocata dinamicamente sull'heap supera i limiti dell'heap stesso. 

## C
Il programma genera lo stesso tipo di errore di Rust con numeri troppo grandi ma ho trovato un caso in cui viene generato dinamicamente il seguente errore che sembra però essere nativo di OSX dato che lo stesso programma si comporta diversamente su Linux. 
```
heapof_c(17745,0x1072d95c0) malloc: can't allocate region
*** mach_vm_map(size=4000000000000000000) failed (error code=3)
heapof_c(17745,0x1072d95c0) malloc: *** set a breakpoint in malloc_error_break to debug
```

## Rust 
Errore statico
```
error: literal out of range for `i32`
 --> heapof.rs:2:23
  |
2 |     let _x = Box::new(10000000000);
  |                       ^^^^^^^^^^^
  |
  = note: `#[deny(overflowing_literals)]` on by default

error: aborting due to previous error
```
