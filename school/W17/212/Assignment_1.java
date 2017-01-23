//1. two classes defined in a same file.
//2. access modifier for class and field variable.
//3. how to create an object from a class.
//4. always remember to put in your comment

class Number {
	  int i;
	//   private int i;
}

public class Assignment_1 {
	  
	  public static void main(String[] args) {

	  	Number n1 = new Number();
	    Number n2 = new Number();
	    
	    
	    n1.i = 9;
	    n2.i = 47;
	    
	    System.out.println("1: n1.i: " + n1.i +
	      ", n2.i: " + n2.i);
	    
	    n1 = n2;
	    System.out.println("2: n1.i: " + n1.i +
	      ", n2.i: " + n2.i);
	    
	    n1.i = 27;
	    System.out.println("3: n1.i: " + n1.i +
	      ", n2.i: " + n2.i);
	  }
} ///:~
