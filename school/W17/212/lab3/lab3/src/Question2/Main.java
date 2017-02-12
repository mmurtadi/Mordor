package Question2;

import javax.swing.*;

public class Main {

    public static void main(String[] args) {
        String sin, name, address, option, funds, message, email, phone;

        sin = JOptionPane.showInputDialog(null, "Please enter your Sin Number");
        name = JOptionPane.showInputDialog(null, "Please enter your Name ");
        address = JOptionPane.showInputDialog(null, "Please enter your Address");
        Account currentUser = new Account();
        currentUser.fillAccount(sin, name, address);

        do {
            option = JOptionPane.showInputDialog(null,"Welcome " + name + "!\n\n Menu:\n" +
                    "1. Deposit Funds:\n"+
                    "2. Withdraw funds\n"+
                    "3. Change name on account\n"+
                    "4. Change email\n"+
                    "5. Change phone number\n"+
                    "6. CREATE ACCOUNT\n"+
                    "0. Close\n\n"+
                    "Choose A Number!:");

            switch (Integer.parseInt(option)) {
                case 1:
                    funds = JOptionPane.showInputDialog(null, "Please enter amount to deposit");
                    currentUser.deposit(Integer.parseInt(funds));
                    break;
                case 2:
                    funds = JOptionPane.showInputDialog(null, "Please enter amount to withdraw");
                    message = currentUser.withdraw(Integer.parseInt(funds));
                    JOptionPane.showMessageDialog(null, message);
                    break;
                case 3:
                    name = JOptionPane.showInputDialog(null, "Please enter your New name");
                    currentUser.setName(name);
                    break;
                case 4:
                    email = JOptionPane.showInputDialog(null, "Please enter your New email");
                    currentUser.setEmail(email);
                    break;
                case 5:
                    phone = JOptionPane.showInputDialog(null, "Please enter your New phone number");
                    currentUser.setPhone(phone);
                    break;
                case 6:


                case 0:
                    break;
                default:
                    JOptionPane.showMessageDialog(null, "Uh-Oh, that's not an option!, try again!");
                    break;
            }

        } while (option != "0");

    }
}
