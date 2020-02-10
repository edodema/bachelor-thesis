Si ha stack overflow quando si esaurisce completamente e si supera la memoria allocata per lo stack di un processo.

## C
Si può. 

## Rust
Il compilatore genera un warning 
```
warning: function cannot return without recursing
 --> stackof.rs:5:1
  |
5 | fn f() {
  | ^^^^^^ cannot return without recursing
6 |     f();
  |     --- recursive call site
  |
  = note: `#[warn(unconditional_recursion)]` on by default
  = help: a `loop` may express intention better if this is on purpose
```
e l'esecuzione stampa
```
thread 'main' has overflowed its stack
fatal runtime error: stack overflow
```
