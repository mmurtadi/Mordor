/**
 * Created by mmurtadi on 30/01/17.
 */
import javax.swing.JOptionPane;

public class Q10debug3 {

    public static void main( String args[] )
        {
            // changed type to double
            double degree1;
            double celsius1;
            double fahrenheit1;

            // changed type to string
            String result;

            // corrected type to double
            String degree;
            String input;
            // removed duplicate variables

            // corrected type to int
            int option;

            // brackets and change to Do while loop
        do {
            input = JOptionPane.showInputDialog(
            " 1 for Fahrenheit to Celsius\n" +
            " 2 for Celsius to Fahrenheit\n 3 to quit:" );

            // Corrected to integer.parseInt
            option = Integer.parseInt(input);

            // Added conditionals if and else if
            if (option == 1) {
                degree = JOptionPane.showInputDialog("Enter the degree in Fahrenheit: ");
                degree1 = Double.parseDouble(degree);
                celsius1 = (degree1 - 32) * 5 / 9;
                result = "The temp in Celsius is " + celsius1;
                JOptionPane.showMessageDialog(null, result, "Result",
                        JOptionPane.INFORMATION_MESSAGE);
            }
            else if ( option == 2) {
                degree = JOptionPane.showInputDialog("Enter degree in Celsius: ");
                degree1 = Double.parseDouble(degree);
                fahrenheit1 = (degree1 * 9 / 5) + 32;
                result = "The temp in Fahrenheit is " + fahrenheit1;
                JOptionPane.showMessageDialog(null, result, "Result",
                        JOptionPane.INFORMATION_MESSAGE);
                System.exit(0);
            }
        } while (option != 3);
    }
}
