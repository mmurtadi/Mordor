package Question6;

import javax.swing.*;

public class Main {

    public static void main(String[] args) {
        int guess = 0, play = 1, goal;

        /**
         * generates random number
         */
        goal = randomNumberGenerator();
        /**
         * takes in user's first guess
         */
        guess = Integer.parseInt(JOptionPane.showInputDialog(null, "Pick a number: \n"));

        /**
         * loops and prints hints until user guesses correcly.
         */
        do {
            if (guess < goal) {
                JOptionPane.showMessageDialog(null, "Too Low!, try again!\n");
            }
            else if (guess > goal){
                JOptionPane.showMessageDialog(null, "Too High!, try again!\n");

            }
            guess = Integer.parseInt(JOptionPane.showInputDialog(null, "Pick a number: \n"));

            if (guess == goal) {
                /**
                 * UI for play again
                 * if so, a new random number will be generated and used
                 */
                do {
                    play = Integer.parseInt(JOptionPane.showInputDialog(null, "Woohoo! you got it! the number was %d\n Wanna play again?\n1. Play Again\n2. Close Game\n"));
                    goal = randomNumberGenerator();
                    if (play == 2) {
                        System.exit(0);
                    }
                } while (play == 1);
            }

        } while (play == 1);

    }
    private static int randomNumberGenerator(){
        return (int)(Math.random()*((10 - 1 + 1)) + 1);
    }
}
