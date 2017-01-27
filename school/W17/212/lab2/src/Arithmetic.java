/**
 * Created by mmurtadi on 23/01/17.
 */
// moved outside
import javax.swing.JOptionPane;

public class Arithmetic {


    public static void main(String args[])
    {
        String firstNumber, secondNumber, thirdNumber;

        // added int num1
        int num1, num2, num3, sum, product, average;


        // REMOVED "=" and added ";" and Capatalized "O" in JOptionPane
        firstNumber = JOptionPane.showInputDialog( "Enter first integer:" );
        // REMOVED  "=" and added ";"
        secondNumber = JOptionPane.showInputDialog( "Enter second integer:" );
        // REMOVED  "=" and added ";"
        // Closed Quotation
        thirdNumber = JOptionPane.showInputDialog( "Enter third integer:" );

        // REMOVED  "="
        num1 = Integer.parseInt( firstNumber );
        // REMOVED  "="
        num2 = Integer.parseInt( secondNumber );
        // REMOVED  "="
        num3 = Integer.parseInt( thirdNumber );
        sum = num1 + num2 + num3;
        product = num1 * num2 * num3;
        average = ( num1 + num2 + num3 ) / 3;
        // added required "."
        JOptionPane.showMessageDialog( null, "The sum is " + sum +"\nThe product is " + product + "\nThe average is " + average, "Results", JOptionPane.PLAIN_MESSAGE );
    }
} // end class Arithmetic