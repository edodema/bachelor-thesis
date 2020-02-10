/*
int main() {
	long tmp;
	{
		int n = 13;
		int *p_in = &n;
		printf("Interno:\t%p -> %d\n", p_in, *p_in);
		tmp = (long) p_in;
	}
	void * p_out = (void *) tmp;
	printf("Esterno:\t%p -> %d\n", p_out, * ((int *) p_out));
} 
*/

fn main() {
    let tmp: *const i32;
    {
        let n = 13;
        let p_in = &n as *const i32;
        println!("Interno:\t{:?} -> {}", p_in, n);
        tmp = p_in;
    }
    let p_out = tmp;
    println!("Esterno:\t{:?} -> {}", p_out, *p_out);  
}
