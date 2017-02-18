package Question5;

import javax.swing.*;

public class Main {

    public static void main(String[] args) {
        float num1, num2, num3, minimumValue;
        String hold1, hold2, hold3;
        hold1 = JOptionPane.showInputDialog(null, "enter a floating point number:\n");
        num1 = Float.parseFloat(hold1);
        hold2 = JOptionPane.showInputDialog(null, "enter a floating point number:\n");
        num2 = Float.parseFloat(hold2);
        hold3 = JOptionPane.showInputDialog(null, "enter a floating point number:\n");
        num3 = Float.parseFloat(hold3);
        /**
         * funciton call passing
         * in 3 floats entered by user
         */
        minimumValue = minimum3(num1, num2, num3);

        JOptionPane.showMessageDialog(null, "Smallest number entered was: "+
                                        minimumValue + "\n");

    }
    /**
     * returns smallest value
     */
    private static float minimum3(float num1, float num2, float num3){
        float numSmall;
        numSmall = Math.min(num3,Math.min(num1, num2));
        return numSmall;
    }
}
