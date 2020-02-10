Si ha memory leak quando della memoria che non serve più non viene deallocata o quando non è possibile accedere a della memoria allocata precedentemente nello stesso codice. 

## C
Nella funzione f viene allocata memoria ma non ritornando alcun puntatore non è possibile accedervi. 

## Rust
Per i principi dell'ownership quando si esce dallo scope la memoria delle variabili locale viene deallocata. Stranamente è possibile ritornare un puntatore ad una variabile locale anche se non è possibile manipolarvi la memoria in safe Rust.
