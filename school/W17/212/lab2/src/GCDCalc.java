import javax.swing.*;

/**
 * Created by mmurtadi on 30/01/17.
 * LAB TEST JAVA W17 Question 2
 *
 */

public class GCDCalc {
    public static void main(String[] args) {
            String num1String, num2String;
            int num1, num2, gcd;
            do {
                // prompts user to enter a valid number
                num1String = JOptionPane.showInputDialog("\nEnter your first number (greater than 0): \n");
                num1 = Integer.parseInt(num1String);
            } while (num1 <= 0);
            do {
                // prompts user to enter a valid second number
                num2String = JOptionPane.showInputDialog("\nEnter your second number (greater than 0): \n");
                num2 = Integer.parseInt(num2String);
            } while (num1 <= 0);

            // recursive GCD Calculation passes both numbers, returns and checks max (num1 Mod num2) = 0;
            gcd = gcdCalcMethod(num1, num2);

            JOptionPane.showMessageDialog(null, "\n\n GCD is " + gcd);

    }
    private static int gcdCalcMethod(int num1, int num2){
        if (num2 != 0){
            return gcdCalcMethod(num2, num1%num2);
        }
        else{
            return num1;
        }
    }
}
