Si ha double free quando due puntatori puntano allo stesso indirizzo, se uno viene liberato l'altro sarà un dangling pointer 

## C
Eseguendo il codice si ha il seguente errore che sembra esser generato da OSX
```
doublefree_c(24580,0x1079065c0) malloc: *** error for object 0x7fe26e400600: pointer being freed was not allocated
doublefree_c(24580,0x1079065c0) malloc: *** set a breakpoint in malloc_error_break to debug
Abort trap: 6
```

## Rust
Non è possibile scrivere un double free perché Safe Rust non permette la manipoazione di raw pointer e per l'ownership: un valore può essere riferito da uno e un solo puntatore, se si esce dallo scope viene perso e se si esegue un assegnamento del riferimento allora il vecchio puntatore diventa inutilizzabile.
