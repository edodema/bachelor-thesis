Il fatto che un puntatore simuli una call by reference fa parte del design di C ed è una feauture più che un bug, in Rust avviene lo stesso ma non si ha la stessa liertà di manipolazione del C. 

## C 
Il programma termina correttamente e riesco a leggere il valore definito nello scope della funzione.

## Rust 
Si può passare un puntatore con una funzione e leggerlo fuori dallo scope di questa, non è però possibile accedere al contenuto della locazione puntata. 
