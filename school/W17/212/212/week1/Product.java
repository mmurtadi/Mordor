//Product.java
// Calculate the product of three integers.

// Java packages
import javax.swing.JOptionPane;

public class Product {

   public static void main( String args[] )
   {
      int x;       // first number
      int y;       // second number
      int z;       // third number
      int result;  // product of numbers

      String xVal;  // first string input by user
      String yVal;  // second string input by user 
      String zVal;  // third string input by user 

      xVal = JOptionPane.showInputDialog( "Enter first integer:" );
      yVal = JOptionPane.showInputDialog( "Enter second integer:" );
      zVal = JOptionPane.showInputDialog( "Enter third integer:" );

      x = Integer.parseInt( xVal );
      y = Integer.parseInt( yVal );
      z = Integer.parseInt( zVal );

      result = x * y * z;

      JOptionPane.showMessageDialog( null, "The product is " + result );

    //  System.exit( 0 );

   } // end method main

} // end class Product
