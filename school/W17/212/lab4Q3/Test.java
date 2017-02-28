package lab4Q3;

import javax.swing.JOptionPane;
public class Test {
  
		public static void main( String args[] )
		{
		   String firstName = JOptionPane.showInputDialog( "Enter your First name" ); 
		   String lastName = JOptionPane.showInputDialog( "Enter your Last name" );
		   String color2 = JOptionPane.showInputDialog( "What color is your car? " );
		   String miles = JOptionPane.showInputDialog( "how many miles have you" +
		      " driven in your car? " );   
		     
		   double miles2 = Double.parseDouble( miles );
		     
		   Miles mile = new Miles(); 
		   Color color = new Color(); 
		   Person person = new Person( firstName , lastName ); 
		     
		   mile.setMile( miles2 ); 
		   color.setColor( color2 );
		    
		   String output = person.getFirstName()+ " " + person.getLastName() +
		      " drove his/her " + color.getColor() +  " car " +
		      " for " + mile.toMilesString() + " Miles";
		     
		   JOptionPane.showMessageDialog( null, output, "Testing class Race", 
		      JOptionPane.INFORMATION_MESSAGE ); 
		     
		   System.exit( 0 ); 
		}
}