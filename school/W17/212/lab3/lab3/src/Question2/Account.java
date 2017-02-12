package Question2;

/**
 * Created by mmurtadi on 09/02/17.
 */
public class Account {
    private String sinText;
    private String accountText;
    private static  int balance = 0;
    private String nameText;
    private String addressText;
    private String emailText;
    private String phoneText;

    public void fillAccount(String sin, String name, String address) {
        sinText = sin;
        nameText = name;
        addressText = address;
        accountText = sinText + Integer.toString(randomNumberGenerator());

    }
    public void setName(String name){
        nameText = name;
    }
    public void setEmail(String email){
        emailText = email;
    }
    public void setPhone(String phone){
        phoneText = phone;
    }
    public void deposit(int number){
        balance += number;
    }
    public String withdraw(int number){
        if (Account.balance < number){
            return "insufficient funds!";
        }
        else{
            balance -= number;
            return "Success!";
        }
    }
    public int getBalance(){
        return balance;
    }

    private int randomNumberGenerator(){
        int min = 1000, max = 9999, range = (min-max) + 1;
        return (int)(Math.random() * range) + min;
    }
}
