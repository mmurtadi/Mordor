

//comma operator, what's new in Java?
public class CommaOperator_14 {
	
	public static void main(String[] args) {
		int m=0, n=90;
		 
		
	//	for(int i = 1, short j = i + 10; 
	//	        i < 5;
		 
		for(int i = 1,  j = i + 10; i < 5;
		        i++, j = i * 2) {
	  	   System.out.println("i= " + i + " j= " + j);
		 }
		 
		// m=10, n=10;
    }
} ///:~
