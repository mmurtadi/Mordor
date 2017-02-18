package Question3;

import javax.swing.*;

public class Main {

    public static void main(String[] args) {
        /**
         * test function calls
         */
        Fraction newFraction = new Fraction();
        newFraction.setNumerator(12);
        newFraction.setDenominator(36);

        newFraction.divide();
        newFraction.reduced(newFraction.getNumerator(),newFraction.getDenominator());
    }
}
