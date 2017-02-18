package Question1;

import javax.swing.*;

/**
 * test file calling and printing or calling every function once
 */
public class Date_Test {

    public static void main(String[] args){
        Date d1 = new Date();
        d1.setFullDate(8,5,87);
        JOptionPane.showMessageDialog(null, "month value of d1 is  is: " + d1.getMonth() + " \nfull date = " +d1.toString());

        Date d2 = new Date();
        d2.setFullDate(3,3,87);
        JOptionPane.showMessageDialog(null, "day value of d2 is: " + d2.getDay() + " \nfull date = " + d2.toString());

        Date d3 = new Date();
        d3.setFullDate(10,11,88);
        JOptionPane.showMessageDialog(null, "year value of d3: " + d3.getYear() +  " \nfull date = " + d3.toString());

        d1.setMonth(2);
        JOptionPane.showMessageDialog(null, "NEW month value of d1 is  is: " + d1.getMonth() + " \nNEW full date = " +d1.toString());

        d2.setDay(2);
        JOptionPane.showMessageDialog(null, "NEW day value of d2 is: " + d2.getDay() + " \nNEW full date = " + d2.toString());

        d3.setYear(66);
        JOptionPane.showMessageDialog(null, "NEW year value of d3: " + d3.getYear() +  " \nNEW full date = " + d3.toString());

        JOptionPane.showMessageDialog(null, "tested whether d1 was less than d2:\nAnswer:.... " + d1.LessThan(d2));
    }

}
