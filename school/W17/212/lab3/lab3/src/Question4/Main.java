package Question4;

import javax.swing.*;

public class Main {

    public static void main(String[] args) {
        String num;

        num = JOptionPane.showInputDialog(null, "enter the square size u want to print (1-100):");

        squareOfAsterisks(Integer.parseInt(num));
    }

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
