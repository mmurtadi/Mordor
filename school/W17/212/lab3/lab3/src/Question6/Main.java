package Question6;

import javax.swing.*;

public class Main {

    public static void main(String[] args) {
        int guess = 0, play = 1, goal;

        // checks input and prints out a hint: "too low" or "too high"
        // then gives user another try and displays which attempt they are on:
        goal = randomNumberGenerator();

        guess = Integer.parseInt(JOptionPane.showInputDialog(null, "Pick a number: \n"));

        do {
            if (guess < goal) {
                JOptionPane.showMessageDialog(null, "Too Low!, try again!\n");
            }
            else if (guess > goal){
                JOptionPane.showMessageDialog(null, "Too High!, try again!\n");

            }
            guess = Integer.parseInt(JOptionPane.showInputDialog(null, "Pick a number: \n"));

            if (guess == goal) {
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
