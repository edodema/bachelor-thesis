## C 
Il puntatore `ptr` è associato alla sua locazione anche dopo la `free` permettendo di accedere alla memoria.

## Rust
In stable Rust la memoria non viene gestita manualmente non è quindi possibile chiamare `malloc` nè `free` fuori da un blocco `unsafe`. Viene invecegestita automaticamente rispettando l'*ownerhsip*.
