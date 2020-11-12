public class D {
	public static class A {
		void print() {
			System.out.println("classe A");
		}
	}

	public static class B extends A {
		void print() {
			System.out.println("classe B");
		}
	}
	
	public static void main(String args[]) {
		A a = new A();
		A b = new B();

		a.print();
		b.print();
	}
}
