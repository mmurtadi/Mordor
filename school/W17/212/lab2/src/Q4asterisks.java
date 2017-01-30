/**
 * Created by mmurtadi on 30/01/17.
 */
public class Q4asterisks {

    public static void main( String args[] ){
        // nested loop printing * up to 10*
        for (int i = 1; i<=10; i++){
            for (int j = 1; j<=i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
        // decrementing loop from 10* to 1*
        for (int i = 10; i >=0; i-- ){
            for (int j = 0; j<=i; j++){
                System.out.print("*");
            }
            System.out.println();
        }

    }

}
