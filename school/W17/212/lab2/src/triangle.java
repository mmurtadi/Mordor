/**
 * Created by mmurtadi on 23/01/17.
 */

public class triangle {

    public static void main( String args[] ){
        int side1, side2;
        double hyp;
        for (side1 = 1; side1 <=353; side1++){
            for (side2 = 1; side2 <=353; side2++){
                hyp = side1*side1 + side2*side2;
                if (Math.sqrt(hyp) < 500) {
                    System.out.printf("hyp^2 = %.1f and Hyp = %.1f\n", hyp, Math.sqrt(hyp));
                }
            }
        }
    }
}
