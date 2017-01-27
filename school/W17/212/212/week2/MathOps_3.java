//1. different math operators
//2. random number generator, check API document for dretails.

import java.util.*;

public class MathOps_3 {
	
 	  // Shorthand to print a string and an int:
		static void printInt(String s, int i) {
			System.out.println(s + " = " + i);
	//		System.out.printf("%s %n","asdfas", 10);
		}
	
		// Shorthand to print a string and a float:
		static void printFloat(String s, float f) {
			System.out.println(s + " = " + f);
		}
		
		public static void main(String[] args) {
		 // Create a random number generator,
		 // seeds with current time by default:
		 Random rand = new Random();
		
		 int i, j, k;
		 // Choose value from 1 to 100:
		 j = rand.nextInt(100) + 1;
		 k = rand.nextInt(100) + 1;
		 
		 printInt("j", j);
		 printInt("k", k);
		 
		 i = j + k; printInt("j + k", i);
		 i = j - k; printInt("j - k", i);
		 i = k / j; printInt("k / j", i);
		 i = k * j; printInt("k * j", i);
		 i = k % j; printInt("k % j", i);
		 
		 j %= k; printInt("j %= k", j);
		 
		 // Floating-point number tests:
		 float u,v,w;  // applies to doubles, too
		 v = rand.nextFloat();
		 w = rand.nextFloat();
		 
		 printFloat("v", v); printFloat("w", w);
		 
		 u = v + w; printFloat("v + w", u);
		 u = v - w; printFloat("v - w", u);
		 u = v * w; printFloat("v * w", u);
		 u = v / w; printFloat("v / w", u);
		 
		 // the following also works for
		 // char, byte, short, int, long,
		 // and double:
		 u += v; printFloat("u += v", u);
		 u -= v; printFloat("u -= v", u);
		 u *= v; printFloat("u *= v", u);
		 u /= v; printFloat("u /= v", u);
		}
} ///:~
