package Question3;

import javax.swing.*;

/**
 * Created by mmurtadi on 10/02/17.
 */
public class Fraction {
    private static int numerator, denominator;
    private static int gcd = 0;

    public void setNumerator(int num){
        numerator = num;
    }
    public void settDenominator(int num){
        denominator = num;
    }

    public double divide(int num1, int num2){
        return num1 / num2;
    }

    public void reduced(int num1, int num2){
        gcd = getGCD(num1, num2);
        numerator = numerator/gcd;
        denominator = denominator/gcd;
        JOptionPane.showMessageDialog(null, "Reduced = "+
                numerator+"/"+denominator);

    }
    private int getGCD(int num1, int num2){
        if (num2 != 0){
            return getGCD(num2, num1%num2);
        }
        else{
            return num1;
        }
    }


}
