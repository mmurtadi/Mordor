//1. what happends to Equals?
//2. the idea of override equals method.

class Value {
	int i;
	
	
	public boolean equals(Value j) {
			return i==j.i;
	} 
}


public class EqualsMethod_7 {

	public static void main(String[] args) {
		 
		 Value v1 = new Value();
		 Value v2 = new Value();
		 
		 v1.i = v2.i = 100;
		 
		 System.out.println(v1.equals(v2));
	}
} ///:~
