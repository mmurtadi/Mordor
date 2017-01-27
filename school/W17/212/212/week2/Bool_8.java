// how about change int i, j to float number

import java.util.*;

public class Bool_8 {

	public static void main(String[] args) {
		 Random rand = new Random();
		 
		 int i = rand.nextInt(100);
		 int j = rand.nextInt(100);

		 //float i = 1.001;
		 //		 float i = 1.001f;
//		 float j = 1.00099f;

		 System.out.println("i = " + i);
		 
		 System.out.println("j = " + j);
		 
		 System.out.println("i > j is " + (i > j));
		 
		 System.out.println("i < j is " + (i < j));
		 
		 System.out.println("i >= j is " + (i >= j));
		 
		 System.out.println("i <= j is " + (i <= j));
		 
		 System.out.println("i == j is " + (i == j));
		 
		 System.out.println("i != j is " + (i != j));
		 
		 // Treating an int as a boolean is not legal Java:
		 //! System.out.println("i && j is " + (i && j));
		 //! System.out.println("i || j is " + (i || j));
		 //! System.out.println("!i is " + !i);
		 System.out.println("(i < 10) && (j < 10) is "
		    + ((i < 10) && (j < 10)) );
		 System.out.println("(i < 10) || (j < 10) is "
		    + ((i < 10) || (j < 10)) );
	}
} ///:~
