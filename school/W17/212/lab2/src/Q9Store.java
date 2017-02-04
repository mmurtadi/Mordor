/**
 * Created by mmurtadi on 30/01/17.
 */

public class Q9Store {
    public static void main(String[] args) {
    int newBalance;
    int creditLimit;

    // placeholder function to pull account credit limit
    creditLimit = accountLookup();

    // pass in values into function to figure out credit final balance
    newBalance = creditLimitCheck(1200, 1000, 3300, 1500);

    // check if returned value is greater than a customers credit limit and prints
        // Credit exceeded or ending balance
    if (newBalance > creditLimit) {
        System.out.println("Credit limit exceeded!");

    }
    else {
        System.out.println("New balance: " + newBalance);
    }

    }

    private static int creditLimitCheck(int begBal, int purchVal, int mTotal, int credits){
        int endBalance;

        endBalance = begBal+purchVal+mTotal-credits;
        return endBalance;
    }

    private static int accountLookup(){
        int accountLimit = 5000;
        return accountLimit;
    }



}
