import javax.swing.*;

/**
 * Created by mmurtadi on 30/01/17.
 * LAB TEST JAVA W17
 */
public class Childsize {
    public static void main(String[] args) {
        int genderNum, fatherSizeNum, motherSizeNum, babySize;
        String fatherSize, motherSize, gender;

        do {
            fatherSize = JOptionPane.showInputDialog("Please enter the Fathers Height in Inches");
            fatherSizeNum = Integer.parseInt(fatherSize);
            motherSize = JOptionPane.showInputDialog("Please enter the Mothers Height in Inches");
            motherSizeNum = Integer.parseInt(motherSize);

            gender = JOptionPane.showInputDialog("Select a Gender\n\nMale: ENTER (0): \nFemale: ENTER (1): \nEXIT: Enter (9)\n\n");
            genderNum = Integer.parseInt(gender);

            if (genderNum == 0){
                babySize = ((motherSizeNum*(13/12)) + fatherSizeNum)/2;
                JOptionPane.showConfirmDialog(null, "The Child is " + babySize + " inches tall");
            }
            else if (genderNum == 1){
                babySize = ((fatherSizeNum*(12/13)) + motherSizeNum)/2;
                JOptionPane.showMessageDialog(null, "The Child is " + babySize + " inches tall");
            }
            else if (genderNum != 9 && genderNum != 1 && genderNum != 0){
                JOptionPane.showMessageDialog(null, "Oops try again");
            }
        } while (genderNum != 9);




    }
}
