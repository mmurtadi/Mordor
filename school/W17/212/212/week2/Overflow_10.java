// be aware of overflow when dealing with big numbers
public class Overflow_10{

	public static void main(String[] args) {
	
		int big = 0x7fffffff; // max int value
		
		System.out.println("big = " + big);
		
		int bigger = big * 4;
		
		System.out.println("bigger = " + bigger);
		 
	}
} ///:~

