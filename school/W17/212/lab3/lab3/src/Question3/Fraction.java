package Question3;

import javax.swing.*;

/**
 * Created by mmurtadi on 10/02/17.
 */
public class Fraction {
    private static int numerator, denominator;
    private static int gcd = 0;
    /**
     * sets numerator value in object
     */
    public void setNumerator(int num){
        numerator = num;
    }

    /**
     * sets Denominator value in object
     */
    public void setDenominator(int num){
        denominator = num;
    }
    /**
     * divides values num/denom
     */
    public double divide(){
        return numerator / denominator;
    }
    /**
     * reduces fraction
     */
    public void reduced(int num1, int num2){
        gcd = getGCD(num1, num2);
        numerator = numerator/gcd;
        denominator = denominator/gcd;
        JOptionPane.showMessageDialog(null, "Reduced = "+
                numerator+"/"+denominator);

    }
    /**
     * returns numerator value in object
     */
    public int getNumerator(){
        return numerator;
    }
    /**
     * returns Denominator value in object
     */
    public int getDenominator(){
        return denominator;
    }

    /**
     * returns GCD
     */
    private int getGCD(int num1, int num2){
        if (num2 != 0){
            return getGCD(num2, num1%num2);
        }
        else{
            return num1;
        }
    }


}
