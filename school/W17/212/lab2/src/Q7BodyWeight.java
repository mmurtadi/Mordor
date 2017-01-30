/**
 * Created by mmurtadi on 30/01/17.
 */
public class Q7BodyWeight {
    // no rule to estimate body weight less than 5 feet;
    // program below is limited to heights above 5 feet and smallest weight is 110lbs
    // sorry to all short people
    public static void main(String args[]) {
        int heightFeet  = 6, heightInches = 1, weightLb = 0;

        if (heightFeet > 5){
            heightFeet = (heightFeet - 5)*12;
            weightLb += 110;
            weightLb += ((heightInches + heightFeet) * 5);
        }
        else {
            weightLb += 110;
            weightLb += (heightInches * 5);
        }
        System.out.println("My ideal body weight is: " + weightLb);
    }
}
