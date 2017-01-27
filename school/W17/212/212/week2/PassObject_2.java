//1. method calls method, static method
//2. pass an object as an argument, pass value or pass reference?



class Letter {
	char c;
}

public class PassObject_2 {

	static void f(Letter y) {
	 y.c = 'z';
	}
	
	public static void main(String[] args) {
		 Letter x = new Letter();
		 x.c = 'a';
		 System.out.println("1: x.c: " +  x.c);
		 f(x);
		 System.out.println("2: x.c: " + x.c);
	}
} ///:~

