
// for statement, comma operator
public class ListCharacters_13 {

	public static void main(String[] args) {
		
		for(int i = 0; i < 128; i++)
		
			if(Character.isLowerCase(i))
				System.out.println("value: " + i + 
						" character: " + (char) i);
	}
} ///:~

