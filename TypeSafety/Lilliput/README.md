# Lilliput
L'obiettivo è sfruttare la differente rappresentazione e memoria allocata dei tipi per violare la safety. 

## C
Vengono allocati 1 Byte per `char` e 2 o 4 per `int`, usando un puntatore anziché leggerne uno e avere come output la lettera 'a' si leggono 2 o 4 Byte sotto forma di intero. 

## Rust 
Durante la compilazione viene generato il seguente errore che impedisce l'esecuzione.
```
error[E0308]: mismatched types
 --> lilliput.rs:3:13
  |
3 |     let p = &arr as *const i32;
  |             ^^^^^^^^^^^^^^^^^^ expected char, found i32

error: aborting due to previous error

For more information about this error, try `rustc --explain E0308`.
```
