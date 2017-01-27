import javax.swing.JOptionPane;

public class Main {

    public static void main(String[] args) {

        int average, i = 0;
        String name, studentID;
        //explicit declarations of arrays to be used to store variables

        int[] grade = {0,0,0,0,0};
        String[] g = {"0","0","0","0","0"};
        int[] letterGrade = {0,0,0,0,0,0,0,0,0,0,0,0,0};
        String[] letter = {"A+","A","A-","B+","B","B-","C+","C","C-","D+","D","D-","F"};

        name = JOptionPane.showInputDialog("Enter your Name: ");
        studentID = JOptionPane.showInputDialog("Enter your student Number: ");

        do {
            g[i] = JOptionPane.showInputDialog("Enter a  grade: ");
            i++;
        } while (i < 5);
        i = 0;
        while (i<5) {
            grade[i] = Integer.parseInt(g[i]);
            i++;
        }
        i = 0;
        while (i < 5){
            // repeating for grade[i],grade[i],grade[i],grade[i]
            if ((grade[i] <= 100 && grade[i] >=90)){
                letterGrade[0]++;
            }
            else if ((grade[i] >=85 && grade[i] < 90)){
                letterGrade[1]++;
            }
            else if ((grade[i] >=80 && grade[i] < 85)){
                letterGrade[2]++;
            }
            else if ((grade[i] >=77 && grade[i] < 80)){
                letterGrade[3]++;
            }
            else if ((grade[i] >= 73  && grade[i] < 77)){
                letterGrade[4]++;
            }
            else if ((grade[i] >= 70  && grade[i] < 73)){
                letterGrade[5]++;
            }
            else if ((grade[i] >= 67  && grade[i] < 70)){
                letterGrade[6]++;
            }
            else if ((grade[i] >= 63  && grade[i] < 67)){
                letterGrade[7]++;
            }
            else if ((grade[i] >= 60  && grade[i] < 63)){
                letterGrade[8]++;
            }
            else if ((grade[i] >= 57  && grade[i] < 60)){
                letterGrade[9]++;
            }
            else if ((grade[i] >= 53  && grade[i] < 57)){
                letterGrade[10]++;
            }
            else if ((grade[i] >= 50  && grade[i] < 53)){
                letterGrade[11]++;
            }
            else if ((grade[i] >= 0 && grade[i] < 50)){
                letterGrade[12]++;
            }
            else {
                System.out.println("Impossible grade");
            }
            i++;
        }

        average = (grade[0] + grade[1] + grade[2] + grade[3] + grade[4])/5;
        i = 0;
        while (i < 13){
            if (letterGrade[i] > 0){
                System.out.print("Number of " + letter[i] + " is " + letterGrade[i] + "\n");
            }
            i++;
        }
        JOptionPane.showMessageDialog(null, "Student Name: " + name +
                "\nStudent Id: " + studentID +
                "\nGrade 1: " + g[0] +
                "\nGrade 2: " + g[1] +
                "\nGrade 3: " + g[2] +
                "\nGrade 4: " + g[3] +
                "\nGrade 5: " + g[4] +
                "\nAverage Grade: " + average);

    }

}
