// "if...else..." statement
// "return" statement

public class IfElse_11 {

	static int test(int testval, int target) {
		 int result = 0;
		 
		 if(testval > target)
		   result = +1;
		 else if(testval < target)
		   result = -1;
		 else
		   result = 0; // Match
		 return result;
		}

	public static void main(String[] args) {
		 System.out.println(test(10, 5));
		 System.out.println(test(5, 10));
		 System.out.println(test(5, 5));
		}
} ///:~

