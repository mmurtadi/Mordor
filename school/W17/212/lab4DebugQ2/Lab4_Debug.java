package lab4DebugQ2;// Debugging the following program Problem
// be sure to comment your changes
// what does this program do?
import java.awt.Container; 
import javax.swing.*;
public class Lab4_Debug {
      public static void main(String str[]) {
     
	 String students = JOptionPane.showInputDialog( 
        	 "Please enter the number of students you wish to average" );

	 // Capitalization error
        
	 int students2 = Integer.parseInt( students );
	 int NumOfStudents = students2 ;
	 int counter = 1;
	 double total = 0, previousNumber = 0, newMaximum = 0, newMinimum = 0;

	 while ( students2 != 0 ) {    
	         String si = JOptionPane.showInputDialog( "Please enter a grade" ); 
	         double givenNum = Double.parseDouble( si );
	         total = total + givenNum; 
	                    
	         if ( counter == 1 ) {
	            previousNumber = givenNum; 
	            newMinimum = givenNum; 
	         }
	                     
	         if ( newMaximum < givenNum )
	            newMaximum = maximum( previousNumber, givenNum );
	                  
	                
	         if ( newMinimum > givenNum )
	            newMinimum = minimum( previousNumber, givenNum ); 
	                       
	         students2--; 
	         counter++; 
	         previousNumber = givenNum;         
	 }  
      // indentation
	 double average1 = average( total, NumOfStudents );

	JOptionPane.showMessageDialog(null,  "The maximum: " + newMaximum +
	 "\nThe Average: " + average1 + " \nThe minimum: " + newMinimum);

	System.exit(0);

   }
   // extra closing bracket
   // semicolon and not specified type for  "y" input
   // made functions static in order to call them and not create new objects every time they are called
   public static double average( double x, double y )
   {
      return x / y; 
   }

	public static double maximum( double x, double y )
   {
   	//return statement missing
      return Math.max( x, y );
   }

   public static double minimum( double x, double y )
   {
      return Math.min( x, y );
   }
}