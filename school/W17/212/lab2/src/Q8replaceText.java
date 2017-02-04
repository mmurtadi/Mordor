/**
 * Created by mmurtadi on 30/01/17.
 */
public class Q8replaceText {
    public static void main(String[] args) {
        // static message to be used to show swap text function
        String message = "\nI hate you\n";

        System.out.println("The line of text to be changed is:" + message );

        // used replaceFirst to change hate to love
        System.out.println("I have rephrased it to read:" + message.replaceFirst("hate", "love"));

    }

}
