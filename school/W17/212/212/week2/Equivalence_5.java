//1. create an object from class with specific initial state.
//2. Test equivalence between objects / primitive variables

public class Equivalence_5 {
	
	public static void main(String [] args) {
	
		Integer n1 = new Integer(47);
		Integer n2 = new Integer(47);
		
		System.out.println(n1 == n2);
		System.out.println(n1 != n2);
		
		System.out.println("\n");
		
		int m=10, n=10;
				
		System.out.println(m == n);
		System.out.println(m != n);
		
//		System.out.println(m == n1);
	}
	
} ///:~
