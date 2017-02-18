package Question2;

/**
 * Created by mmurtadi on 09/02/17.
 */
public class Account {
    private String sinText;
    private String accountText;
    private int balance = 0;
    private String nameText;
    private String addressText;
    private String emailText;
    private String phoneText;
    /**
     * fills object with required info to make an account including
     * function call to retrieve a random number
     * to be concatenated with Sin number and creating object account number
     */
    public void fillAccount(String sin, String name, String address) {
        sinText = sin;
        nameText = name;
        addressText = address;
        accountText = sinText + Integer.toString(randomNumberGenerator());

    }
    /**
     * changes name parameter of an object
     */
    public void setName(String name){
        nameText = name;
    }
    /**
     * changes email parameter of an object
     */
    public void setEmail(String email){
        emailText = email;
    }
    /**
     * changes phone number parameter of an object
     */
    public void setPhone(String phone){
        phoneText = phone;
    }
    /**
     * increases balance of an object by dollar amount inputted
     */
    public void deposit(int number){
        balance += number;
    }

    /**
     * decreases balance by amount requested, returns true if successful/sufficient amount is in account and decreases balance.
     */
    public boolean withdraw(int number){
        if (balance < number){
            return false;
        }
        else{
            balance -= number;
            return true;
        }
    }
    /**
     * returns current balance of an object
     */
    public int getBalance(){
        return balance;
    }

    /**
     * generates random 5 digit number to be concatenated to account
     */
    private int randomNumberGenerator(){
        return (int)(Math.random()*((9999 - 1000 + 1)) + 1000);
    }
}
