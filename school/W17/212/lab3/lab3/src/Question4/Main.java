package Question4;

import javax.swing.*;

public class Main {

    public static void main(String[] args) {
        String num;
        /**
         * UI
         */
        num = JOptionPane.showInputDialog(null, "enter the square size u want to print (1-100):");

        squareOfAsterisks(Integer.parseInt(num));
    }
    /**
     * takes number, prints square of * using nested for loop
     */
    private static void squareOfAsterisks(int num) {
        char star = '*';
        for (int i = 0; i < num; i++) {
            for (int j = 0; j < num; j++) {
                System.out.print(star);
            }
            System.out.println();
        }
    }
}
